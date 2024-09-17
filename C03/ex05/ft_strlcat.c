/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsarmien <dsarmien@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:47:45 by dsarmien          #+#    #+#             */
/*   Updated: 2024/07/02 18:57:57 by dsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(dest);
	if (size <= j)
		return (size + ft_strlen(src));
	while (src[i] && j + 1 < size - 1)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] == '\0';
	return (j + ft_strlen(src));
}

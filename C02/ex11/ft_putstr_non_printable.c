/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsarmien <dsarmien@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 19:18:00 by dsarmien          #+#    #+#             */
/*   Updated: 2024/06/30 19:35:47 by dsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex(int n)
{
	char	*symbols;

	symbols = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &symbols[n / 16], 1);
	write(1, &symbols[n % 16], 1);
}

int	is_printable(char c)
{
	return (' ' <= c && c <= '~');
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_printable(str[i]))
			write(1, &str[i], 1);
		else
			hex(str[i] & 0xff);
		i++;
	}
}

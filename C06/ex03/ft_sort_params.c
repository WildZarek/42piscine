/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsarmien <dsarmien@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:34:34 by dsarmien          #+#    #+#             */
/*   Updated: 2024/07/06 16:21:45 by dsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_params(char **args, int count)
{
	int	i;
	int	j;

	i = 1;
	while (i < count)
	{
		j = 0;
		while (args[i][j])
		{
			write(1, &args[i][j], sizeof(char));
			j++;
		}
		write(1, "\n", sizeof(char));
		i++;
	}
}

void	ft_sort_tab(char **tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (0 < ft_strcmp(tab[i], tab[j]))
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_sort_tab(argv, argc);
	ft_print_params(argv, argc);
	return (0);
}

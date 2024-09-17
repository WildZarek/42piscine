/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsarmien <dsarmien@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 21:00:43 by dsarmien          #+#    #+#             */
/*   Updated: 2024/06/21 20:45:16 by dsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	digit[3];

	digit[0] = '0';
	while (digit[0] <= '9')
	{
		digit[1] = digit[0] + 1;
		while (digit[1] <= '9')
		{
			digit[2] = digit[1] + 1;
			while (digit[2] <= '9')
			{
				if (digit[0] < digit[1] && digit[1] < digit[2])
				{
					write(1, &digit, 3);
					if (digit[0] != '7')
					{
						write(1, ", ", 2);
					}
				}
				digit[2]++;
			}
			digit[1]++;
		}
		digit[0]++;
	}
}

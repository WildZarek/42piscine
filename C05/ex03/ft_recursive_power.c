/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsarmien <dsarmien@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:37:13 by dsarmien          #+#    #+#             */
/*   Updated: 2024/07/09 13:44:26 by dsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (0 < power)
		return (nb * ft_recursive_power(nb, (power - 1)));
	else if (power == 0)
		return (1);
	else
		return (0);
}

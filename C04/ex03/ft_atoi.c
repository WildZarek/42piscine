/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsarmien <dsarmien@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:23:07 by dsarmien          #+#    #+#             */
/*   Updated: 2024/07/06 12:41:15 by dsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_a_sign(char c)
{
	return (c == '-' || c == '+');
}

int	is_number(char c)
{
	return ('0' <= c && c <= '9');
}

int	is_strange(char c)
{
	return (c == '\t'
		|| c == '\n'
		|| c == '\r'
		|| c == '\f'
		|| c == ' ');
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	sign = 1;
	nb = 0;
	i = 0;
	while (is_strange(str[i]))
	{
		i++;
	}
	while (is_a_sign(str[i]))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (is_number(str[i]))
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

int	ft_recursive_power(int nb, int power)
{
	if (0 < power)
		return (nb * ft_recursive_power(nb, (power - 1)));
	else if (power == 0)
		return (1);
	else
		return (0);
}

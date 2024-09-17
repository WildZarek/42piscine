int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	p;

	i = 0;
	p = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			p *= nb;
			i++;
		}
		return (p);
	}
}

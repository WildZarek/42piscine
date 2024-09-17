int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 1)
	{
		factorial *= nb--;
	}
	return (factorial);
}

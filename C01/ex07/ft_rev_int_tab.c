void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	while (a < size / 2)
	{
		b = tab[size - 1 - a];
		tab[size - 1 - a] = tab[a];
		tab[a] = b;
		a++;
	}
}

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	new;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				new = tab[i];
				tab[i] = tab[j];
				tab[j] = new;
			}
			j++;
		}
		i++;
	}
}

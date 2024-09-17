#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	iterate_base(unsigned int numb, unsigned int base, char symb[])
{
	if (base <= numb)
		iterate_base(numb / base, base, symb);
	write(1, &symb[numb % base], 1);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	if (*base == '\0' || *(base + 1) == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (is_valid_base(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		iterate_base(nbr, ft_strlen(base), base);
	}
}

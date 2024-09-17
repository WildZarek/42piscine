#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, sizeof(char));
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str++);
	}
}

int	main(int argc, char **argv)
{
	while (argc--)
	{
		if (argc != 0)
		{
			ft_putstr(argv[argc]);
			ft_putchar('\n');
		}
	}
}

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, sizeof(char));
}

void	ft_print_comb2(void)
{
	char	pri;
	char	sec;

	pri = 0;
	sec = 0;
	while (pri < 100)
	{
		sec = pri + 1;
		while (sec < 100)
		{
			ft_putchar(pri / 10 + '0');
			ft_putchar(pri % 10 + '0');
			ft_putchar(' ');
			ft_putchar(sec / 10 + '0');
			ft_putchar(sec % 10 + '0');
			if (pri / 10 != 9 || pri % 10 != 8)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			sec++;
		}
		pri++;
	}
}

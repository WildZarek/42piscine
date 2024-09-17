#include <unistd.h>

void	ft_is_negative(int n)
{
	char	str;

	str = 'P';
	if (n < 0)
	{
		str = 'N';
	}
	write(1, &str, 1);
}

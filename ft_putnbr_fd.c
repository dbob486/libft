#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long tmp;

	tmp = (long)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		tmp = (long)n * -1;
	}
	if (tmp > 9)
		ft_putnbr_fd(tmp / 10, fd);
	ft_putchar_fd(tmp % 10 + '0', fd);
}

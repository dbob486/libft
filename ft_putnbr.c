#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int tmp;

	tmp = (unsigned int)n;
	if (n < 0)
	{
		ft_putchar('-');
		tmp = (unsigned int)n * -1;
	}
	if (tmp > 9)
		ft_putnbr(tmp / 10);
	ft_putchar(tmp % 10 + '0');
}

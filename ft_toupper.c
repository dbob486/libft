#include "libft.h"

int	ft_toupper(int c)
{
	if (BL_LW(c))
		return (c - 32);
	return (c);
}

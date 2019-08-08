#include "libft.h"

int	ft_tolower(int c)
{
	if (BL_UP(c))
		return (c + 32);
	return (c);
}

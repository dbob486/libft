#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ch_b;

	ch_b = (unsigned char *)b;
	while (len--)
		*ch_b++ = (unsigned char)c;
	return (b);
}

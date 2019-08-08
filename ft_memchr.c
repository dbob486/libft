#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ch_s;

	i = 0;
	ch_s = (unsigned char*)s;
	while (i < n && ch_s[i] != (unsigned char)c)
		i++;
	if (i == n)
		return (0);
	else
		return ((void*)(s + i));
}

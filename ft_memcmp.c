#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ch_s1;
	unsigned char	*ch_s2;
	size_t			i;

	i = 0;
	ch_s1 = (unsigned char*)s1;
	ch_s2 = (unsigned char*)s2;
	while (i < n && ch_s1[i] == ch_s2[i])
		i++;
	if (i == n)
		return (0);
	else
		return (ch_s1[i] - ch_s2[i]);
}

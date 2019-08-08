#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
		dest[i++] = (*src ? *src++ : 0);
	return (dest);
}

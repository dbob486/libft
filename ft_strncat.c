#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t len;

	len = ft_strlen(dest);
	while (*src && n--)
		dest[len++] = *(src++);
	dest[len] = 0;
	return (dest);
}

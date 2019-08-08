#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t len;

	len = ft_strlen(dest);
	while (*src)
		dest[len++] = *(src++);
	dest[len] = 0;
	return (dest);
}

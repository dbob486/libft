#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;

	if (!*haystack && !*needle)
		return ((char*)haystack);
	while (*haystack)
	{
		i = 0;
		while (needle[i] && haystack[i] == needle[i])
			i++;
		if (!needle[i])
			return ((char*)haystack);
		haystack++;
	}
	return (0);
}

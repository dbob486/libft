#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *ret;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start + len)
		return (NULL);
	ret = ft_strnew(len);
	while (len-- && ret)
		ret[len] = s[start + len];
	return (ret);
}

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	char	*ret;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ret = ft_strnew(len);
	while (len-- > 0 && ret)
		ret[len] = f(s[len]);
	return (ret);
}

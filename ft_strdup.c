#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	char	*ret;

	i = 0;
	if (!(ret = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	while (*str)
		ret[i++] = *(str++);
	ret[i] = 0;
	return (ret);
}

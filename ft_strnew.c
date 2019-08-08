#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *ret;

	if (!(ret = (char*)malloc((size + 1) * sizeof(char))))
		return (NULL);
	ret[size] = 0;
	while (size-- > 0)
		ret[size] = 0;
	return (ret);
}

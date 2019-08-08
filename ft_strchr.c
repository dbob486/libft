char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != c)
		str++;
	if (!*str && c)
		return (0);
	return ((char*)str);
}

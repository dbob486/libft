char	*ft_strrchr(const char *str, int c)
{
	char *ch;

	ch = 0;
	while (*str)
	{
		if (*str == c)
			ch = (char*)str;
		str++;
	}
	if (!c)
		return ((char*)str);
	return (ch);
}

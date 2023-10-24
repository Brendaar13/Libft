char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	clen;

	i = 0;
	clen = ft_strlen(s);
	if (start >= clen)
		return (ft_strdup(""));
	if (len > clen - start)
		len = clen - start;
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (len > i && start < clen)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}

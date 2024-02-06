char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*alm;
	size_t	i;
	size_t	clen;

	i = 0;
	clen = ft_strlen(str);
	if (start >= clen)
		return (ft_strdup(""));
	if (len > clen - start)
		len = clen - start;
	alm = ft_calloc((len + 1), sizeof(char));
	if (!alm)
		return (NULL);
	while (len > i && start < clen)
	{
		alm[i] = str[i + start];
		i++;
	}
	alm[i] = '\0';
	return (alm);
}

/*int main ()
{
	char *org = "esto es para vosotros aficion siuu";
	int start = 7;
	size_t len = 14;

	char *substr = ft_substr(org, start, len);

	printf("Original: %s\n", org);
	printf("Duplicado: %s\n", substr);

	return (0);
}*/

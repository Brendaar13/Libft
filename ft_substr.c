char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*alm;
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(str);
	if (start >= len_src)
		return (ft_strdup(""));
	if (len > len_src - start)
		len = len_src - start;
	alm = ft_calloc((len + 1), sizeof(char));
	if (!alm)
		return (NULL);
	while (len > i && start < len_src)
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

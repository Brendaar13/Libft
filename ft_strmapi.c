char	ft_rotn(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z' - i)
	    return (c + i);
	else if (c >= 'z' - i && c <= 'z')
	    return ('a' + c % ('z' - i) - 1);
	else if (c >= 'A' && c <= 'Z' - i)
	    return (c + i);
	return ('A' + c % ('Z' - i) - 1);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main ()
{
	char *org = "aAaaaA";
	char *result = ft_strmapi(org, ft_rotn);
	printf("Original:  %s\n", org);
	printf("Resultado: %s\n", result);

	return (0);
}

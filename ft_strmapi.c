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
	int	*f = ft_toupper;
	char *org = "me gustan las alcachofas";
	char *result = ft_strmapi(org, f);

	printf("Original: %s\n", org);
	printf("Resultado: %s\n", result);

	return (0);
}

mierda

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		else if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

int main()
{
	char *s1 = "Tengo mucho sueño y hambre";
	char *s2 = "Tengo mucha hambre";
	size_t n = 7;

	int result = ft_strncmp(s1, s2, n);

	printf("%d\n", result);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1) - ((unsigned char)*s2);
		else if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
int main()
{
	char *s1 = "Tengo sueno";
	char *s2 = "Tengo Sueno";
	size_t n = 7;

	int result = ft_strncmp(s1, s2, n);

	printf("%d\n", result);
	return (0);
}

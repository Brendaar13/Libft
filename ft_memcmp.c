int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char	*str2;

	str1 = ((unsigned char *)s1);
	str2 = ((unsigned char *)s2);
	while (n > 0)
	{
		if (*str1 != *str2)
		{
			return ((int)(*str1 - *str2));
		}
		str1++;
		str2++;
		n--;
	}
	return (0);
}

int main()
{
	char *s1 = "adios";
	char *s2 = "adia";
	size_t n = sizeof(s1);

	int result = ft_memcmp(s1, s2, n);

	printf("%d\n", result);
	return (0);
}

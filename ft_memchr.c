void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	to_find;

	i = 0;
	str = ((unsigned char *)s);
	to_find = ((unsigned char)c);
	while (i < n)
	{
		if (str[i] == to_find)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

int main ()
{
	char str[] = "Stille Wasser sind tief.";
	int to_find = 'W';
	size_t n = sizeof(str);
	char *result = (char *)ft_memchr(str, to_find, n);

	printf("Original: %s\n", str);
	printf("Resut: %s\n", result);

	return 0;
}

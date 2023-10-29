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
	char buffer[] = {0x13, 0x77, 0x88, 0x93};
	int to_find = 0x77;
	size_t n = sizeof(buffer);

	printf("%02X\n", ft_memchr(buffer, to_find, n));

	return 0;
}

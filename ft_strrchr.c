void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	to_find;

	str = ((unsigned char *)s);
	to_find = ((unsigned char)c);
	while (n > 0)
	{
		if (*str == to_find)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}

int main()
{
  char *s = "Hola que tal?";
  int to_find = 'a';

  char *result = ft_strrchr(s, to_find);

  printf("%s\n", result);
  return (0);
}

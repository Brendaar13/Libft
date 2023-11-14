char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	a = c;
	i = ft_strlen(s);
	if (a == 0)
		return ((char *) &s[i]);
	while (i >= 0)
	{
		if (s[i] == a)
			return ((char *) &s[i]);
		i--;
	}
	if (a == '\0')
		return ((char *) &s[i]);
	return (0);
}

/*int main()
{
  char *s = "Hola que tal?";
  int delimit = 'a';
  char *n;

  n = ft_strrchr(s, delimit);

  printf("Original: %s\n", s);
  printf("Delimitado: %s\n", n);
}*/

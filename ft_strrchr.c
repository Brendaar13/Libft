char	*ft_strrchr(const char *string, int c)
{
	int		i;
	char	alm;

	alm = c;
	i = ft_strlen(string);
	if (alm == 0)
		return ((char *) &string[i]);
	while (i >= 0)
	{
		if (string[i] == alm)
			return ((char *) &string[i]);
		i--;
	}
	if (alm == '\0')
		return ((char *) &string[i]);
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

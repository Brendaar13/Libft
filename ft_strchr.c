char	*ft_strchr(const char *string, int c)
{
	char	alm;

	alm = c;
	while (*string)
	{
		if (*string == alm)
			return ((char *) string);
		string++;
	}
	if (alm == '\0')
		return ((char *)string);
	return (0);
}

/*int main()
{
  char *s = "Hola que tal?";
  int delimit = 'a';
  char *n;

  n = ft_strchr(s, delimit);

  printf("Original: %s\n", s);
  printf("Delimitado: %s\n", n);
}*/

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
	return (0);
}

int main()
{
  char *s = "Hola que tal?";
  int to_find = 'a';

  char *result = ft_strrchr(s, to_find);

  printf("%s\n", result);
  return (0);
}

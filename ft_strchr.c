char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c;
	while (*s)
	{
		if (*s == a)
			return ((char *) s);
		s++;
	}
	if (a == '\0')
		return ((char *)s);
	return (0);
}
int main()
{
  char s[] = "Hola que tal?"
  char delimit = "u"

  printf("%s\n", s, delimit);
}

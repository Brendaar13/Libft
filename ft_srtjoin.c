char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		n1;
	int		n2;
	char	*str;

	if (s1 && s2)
	{
		n1 = ft_strlen(s1);
		n2 = ft_strlen(s2);
		str = (char *)malloc(sizeof(char) * (n1 + n2 + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			str[n1] = s2[i];
			n1++;
		}
		str[n1] = '\0';
		return (str);
	}
	return (NULL);
}

int main ()
{
	char *s1 = "Capibara";
	char *s2 = " Chiguire";

	char *result = ft_strjoin(s1, s2);

	printf("S1: %s\n", s1);
	printf("S2: %s\n", s2);
	printf("Result: %s\n", result);

	return (0);
}

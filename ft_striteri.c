void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

int main ()
{
	char str[] = "Dale un pez a un hombre";

    int i = 0;
    while (str[i] != '\0') {
        printf("Index: %d, Char: %c\n", i, str[i]);
        ft_striteri(i, &str[i]);
	   	i++;
    }

    return 0;
}

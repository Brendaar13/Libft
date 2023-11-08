int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int main ()
{
	char c = 'A';

	if (ft_isalpha(c))
		printf("Es un caracter %c\n");
	else
		printf("%c No es un caracter\n");
    return 0;
}

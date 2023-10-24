void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = b;
	while (i < len)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

int main ()
{
	char buffer[5];
	ft_memset(buffer, 'A', 5);
	printf("%s\n", buffer);

	return 0;
}

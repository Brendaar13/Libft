void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

int main ()
{
	char buffer[5] = "hola";
	printf("Before: %s\n", buffer);
	ft_bzero(buffer, sizeof(buffer));
	printf("After: %s\n", buffer);
	return (0);
}

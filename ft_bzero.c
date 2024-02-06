void	ft_bzero(void *ptr, size_t n)
{
	ft_memset(ptr, 0, n);
}

int main ()
{
	char buffer[5] = "hola";
	printf("Before: %s\n", buffer);
	ft_bzero(buffer, sizeof(buffer));
	printf("After: %s\n", buffer);
	return (0);
}

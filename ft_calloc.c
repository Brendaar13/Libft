void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}
int main ()
{
	size_t	count = 5;
	size_t	size = sizeof(size_t);
	size_t	*array = ft_calloc(count, size);

	if (array)
	{
		printf("%zu\n", array[0]);
		if (count > 1)
			printf("%zu\n", array[1]);
		if (count > 2)
			printf("%zu\n", array [2]);
	}
		return (0);
}

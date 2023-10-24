size_t	ft_strlen(const char *str);

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;

	if (src == NULL && dst == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}

int main ()
{
	char src[] = "Me quiero mori";
	char dst[5];
	char dst2[5];
	size_t n = ft_strlen(src) + 1;

	//ft_memcpy(src, dst, 10);
	//printf("%s\n", src);
	printf("%s\n", ft_memcpy(dst, src, n));
	printf("%s\n", memcpy(dst2, src, n));
	return (0);
}

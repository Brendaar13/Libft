void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	if (src == NULL && dst == NULL)
		return (NULL);

	char *aux_dst = (char *)dst;
	char *aux_src = (char *)src;

	while (n--)
	{
		*aux_dst++ = *aux_src++;
	};
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

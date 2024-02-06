void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *aux_dst;
	unsigned char *aux_src;	
	
	if (src == NULL && dst == NULL)
		return (NULL);
	aux_dst = (unsigned char *)dst;
	aux_src = (unsigned char *)src;
	while (n--)
	{
		*aux_dst++ = *aux_src++;
	}
	return (dst);
}

int main ()
{
	char src[] = "Me quiero mori";
	char dst[5];
    // - 1 para reservar caracter nulo
	size_t n = sizeof(dst) - 1;
	char *result = ft_memcpy(dst, src, n);
	printf("%s\n", src);
	printf("%s\n", result);
	return (0);
}

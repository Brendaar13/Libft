void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
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
	size_t n = ft_strlen(src) + 1;
	printf("%s\n", ft_memcpy(dst, src, n));
	return (0);
}
Revisar main

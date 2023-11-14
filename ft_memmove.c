void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (src == NULL && dst == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d >= s)
	{
		while (len --)
			d[len] = s[len];
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}

int main()
{
	char src[] = "Me quiero morir";
	char dst[5];
	size_t n = ft_strlen(src) + 1;

	printf("%s\n", ft_memmove(dst, src, n));
	return (0);
}
Revisar main

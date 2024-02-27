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
	char src[] = "hola jeje";
	char *dst = src + 2;

	printf("Original: %s\n", src);
	char *result = ft_memmove(dst, src, 5);
	printf("Copy:\n src: %s\n result: %s\n",src, result);
	return (0);
}

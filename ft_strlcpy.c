size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t size)
{
	size_t	i;
	size_t	n;

	n = ft_strlen(src);
	if (size < 1)
		return (n);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
		dst[i] = '\0';
	return (n);
}

int main ()
{
	char src[] = "hambree";
	char dst[6];
	size_t n;

	n = ft_strlcpy (dst, src, sizeof(dst));

	printf("%s\n", src);
	printf("%s\n", dst);
	printf("%zu\n", n);
	return (0);
}

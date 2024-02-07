char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *) haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
	j = 0;
		if (haystack[i] == needle[0])
		{
			while (i + j < len && needle[j] && haystack[i + j] == needle[j])
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

int main ()
{
	char *haystack = "Testeo de esta shit";
	char *needle = "esta";
	char *result = ft_strnstr(haystack, needle, 50);

	printf("%s\n", result);
	return (0);
}

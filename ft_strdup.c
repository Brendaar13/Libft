char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		size;

	size = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (size +1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, size);
	ptr[size] = '\0';
	return (ptr);
}

int main ()
{
	char *org = "Ver el mundo arder";
	char *dup = ft_strdup(org);

	printf("Original: %s\n", org);
	printf("Duplicado: %s\n", dup);

	return (0);
}

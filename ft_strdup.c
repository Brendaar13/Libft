char	*ft_strdup(const char *string)
{
	char	*ptr;
	int		size;

	size = ft_strlen(string);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, string, size);
	ptr[size] = '\0';
	return (ptr);
}

/*int main ()
{
	char *org = "Ver el mundo arder";
	char *dup = ft_strdup(org);

	printf("Original: %s\n", org);
	printf("Duplicado: %s\n", dup);

	return (0);
}*/

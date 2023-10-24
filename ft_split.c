static int	sep_finder(char str, char c)
{
	if (str == c)
		return (1);
	return (0);
}

static int	count_words(char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!sep_finder(str[i], c) && (sep_finder(str[i + 1], c)
				|| str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static void	free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static int	write_str(char **r, char *str, char c)
{
	int	i;
	int	j;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (sep_finder(str[i], c))
			i++;
		else
		{
			j = 0;
			while (!sep_finder(str[i + j], c) && (str[i + j]))
				j++;
			r[words] = ft_substr(str, i, j);
			if (r[words] == NULL)
				return (free_str(r), 0);
			i += j;
			words++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**res;

	if (!s)
		return (NULL);
	words = count_words((char *)s, c);
	res = ft_calloc(words + 1, sizeof(char *));
	if (!res)
		return (NULL);
	if (!write_str(res, (char *)s, c))
		return (NULL);
	return (res);
}

int main() {
    char str[] = "Ayudaaadtete";
    char delimiter = 'd';
    char **result;
    
    result = ft_split(str, delimiter);
    
    while (result[i] != NULL){
        printf("%s\n", result[i++]);
    }
    return (0);
}
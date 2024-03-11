static int	c_strfinder(char str, char c)
{
	if (str == c)
		return (1);
	return (0);
}

static int	count_words(char *str, char delimitador)
{
	int	i;
	int	words_found;

	i = 0;
	words_found = 0;
	while (str[i])
	{
		if (!c_strfinder(str[i], delimitador) && (c_strfinder(str[i + 1], delimitador)
				|| str[i + 1] == '\0'))
			words_found++;
		i++;
	}
	return (words_found);
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

static int	divstr_substr(char **alm, char *str, char delimitador)
{
	int	i;
	int	len;
	int	num_substr;

	i = 0;
	num_substr = 0;
	while (str[i])
	{
		if (c_strfinder(str[i], delimitador))
			i++;
		else
		{
			len = 0;
			while (!c_strfinder(str[i + len], delimitador) && (str[i + len]))
				j++;
			alm[num_substr] = ft_substr(str, i, len);
			if (alm[num_substr] == NULL)
				return (free_str(r), 0);
			i += len;
			num_substr++;
		}
	}
	return (1);
}

char	**ft_split(char const *str, char delimitador)
{
	int		alm_words;
	char	**alm_substr;

	if (!str)
		return (NULL);
	alm_words = count_words((char *)str, delimitador);
	alm_substr = ft_calloc(alm_words + 1, sizeof(char *));
	if (!alm_substr)
		return (NULL);
	if (!divstr_substr(alm_substr, (char *)str, delimitador))
		return (NULL);
	return (alm_substr);
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

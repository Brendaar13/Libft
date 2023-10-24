char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	str = NULL;
	if (s1 != NULL && set != NULL)
	{
		start = 0;
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		end = ft_strlen(s1);
		while (ft_strchr(set, s1[end - 1]) && end > start)
			end--;
		str = (char *)malloc(sizeof(char) * (end - start + 1));
		if (str != NULL)
		{
			ft_strlcpy(str, &s1[start], end - start + 1);
		}
	}
	return (str);
}

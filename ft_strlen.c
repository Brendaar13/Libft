#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// int main()
// {
// 	char *str = "test";
// 	size_t len = ft_strlen(str);
// 	printf("%u",  (unsigned) len);
// }
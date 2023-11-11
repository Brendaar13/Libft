#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
// char	*ft_strjoin(const char *s1, const char *s2)
// {
// 	int		i;
// 	int		n1;
// 	int		n2;
// 	char	*str;

// 	if (s1 && s2)
// 	{
// 		n1 = ft_strlen(s1);
// 		n2 = ft_strlen(s2);
// 		str = (char *)malloc(sizeof(char) * (n1 + n2 + 1));
// 		if (str == NULL)
// 			return (NULL);
// 		i = -1;
// 		while (s1[++i])
// 			str[i] = s1[i];
// 		i = -1;
// 		while (s2[++i])
// 		{
// 			str[n1] = s2[i];
// 			n1++;
// 		}
// 		str[n1] = '\0';
// 		return (str);
// 	}
// 	return (NULL);
// }

char *ft_strjoin(const char *s1, const char *s2)
{
    if (s1 == NULL || s2 == NULL)
        return NULL;

    size_t n1;
    size_t n2;
	size_t total;

	n1 = ft_strlen(s1);
	n2 = ft_strlen(s2);
	total = n1 + n2 + 1;
	char *str = (char *)malloc(total);

    if (!str)
	{
		return (NULL);
	}

	ft_strlcpy(str, s1, total);
	ft_strlcat(str, s2, total);

    return (str);
}
// Crear una string concatenando 2 strings existentes. En este caso concreo hay que utilizar total como la suma de length de ambos string más un byte nulo ('\0'). 
// Si se ha podido reservar la memoria el tamaño reservado va a ser total, por lo que se tiene que utilizar esto.
// int main ()
// {
// 	char *s1 = "Capibara";
// 	char *s2 = "Chiguire";
// 	char *result = "";

// 	printf("Before:\n");
// 	printf("  src:    \"%s\"\n", s1);
// 	printf("  dst:    \"%s\"\n", s2);
// 	printf("  result: \"%s\"\n", result);

// 	result = ft_strjoin(s1, s2);

// 	printf("After:\n");
// 	printf("  src:    \"%s\"\n", s1);
// 	printf("  dst:    \"%s\"\n", s2);
// 	printf("  result: \"%s\"\n", result);

// 	return (0);
// }
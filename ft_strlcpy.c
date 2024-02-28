#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	alm;

	alm = ft_strlen(src);
	if (size < 1)
		return (alm);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
		dst[i] = '\0';
	return (alm);
}

// Copia src a dts. Si dst es mas pequenio que src copia lo que entre en dst.

/*int main ()
{
 	char src[] = "hambree";
 	char dst[6] = "";
	char result;

 	printf("Before:\n");
 	printf("  src:%s\n", src);
 	printf("  dst:%s\n", dst);

	result = ft_strlcpy (dst, src, sizeof(dst));

 	printf("After:\n");
 	printf("  src:%s\n", src);
 	printf("  dst:%s\n", dst);

 	return (0);
}*/

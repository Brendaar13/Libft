#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
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

// Copia src a dts. Si dst es mas pequenio que src copia lo que entre en dst.

int main ()
// {
// 	char src[] = "hambree";
// 	char dst[6] = "";
// 	size_t size = 0;

// 	printf("Before:\n");
// 	printf("  src:\t\"%s\"\n", src);
// 	printf("  dst:\t\"%s\"\n", dst);
// 	printf("  size:\t%u\n", (unsigned) size);

// 	n = ft_strlcpy (dst, src, sizeof(dst));

// 	printf("After:\n");
// 	printf("  src:\t\"%s\"\n", src);
// 	printf("  dst:\t\"%s\"\n", dst);
// 	printf("  size:\t%u\n", (unsigned) size);
// 	return (0);
// }

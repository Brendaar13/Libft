#include "libft.h"
#include <stdio.h>

// size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t size)
// {
//         size_t  dstlen;
//         size_t  srclen;
//         size_t  i;

//         dstlen = ft_strlen(dst);
//         srclen = ft_strlen(src);
//         i = 0;
//         if (size == 0)
//                 return (srclen);
//         if (size <= dstlen)
//                 return (srclen += size);
//         while (src[i] && dstlen < size - 1)
//         {
//                 dst[dstlen + i] = src[i];
//                 i++;
//         }
//         if (dstlen < size)
// 		dst[dstlen + i] = '\0';
// 	return (dstlen + srclen);
// }

/*size_t ft_strlcat(char *dst, const char *src, size_t size)
{
        size_t  dstlen;
        size_t  i;

        dstlen = ft_strlen(dst);
        i = 0;
        if (size == 0)
                return (dstlen);
        while (src[i] && dstlen + i < size - 1){
                dst[dstlen + i] = src[i];
                i++;
        }
        dst[dstlen + i] = '\0';
	return (dstlen + i + 1);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (srclen);
	if (size <= dstlen)
		return (srclen += size);
	else
		srclen += dstlen;
	while (src[i] != '\0' && dstlen < size - 1 && dst != src)
	{
		dst[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return (srclen);
}

// Concatena todos los bytes posibles de src a dts. Nunca tiene que machacar el byte nulo ('\0') el final del string, si esto ocurriese significa que el string dst está
// mal formateado o el size es incorrecto. El length de dst es size - 1, ya que se reserva un byte para el byte nulo del final de string.

int main ()
// {
//         char src[] = "tengo suenioooo";
//         char dst[13] = "ayudaa";
//         size_t size = 0;

//         printf("Before:\n");
// 	printf("  src:\t\"%s\"\n", src);
// 	printf("  dst:\t\"%s\"\n", dst);
// 	printf("  size:\t%u\n", (unsigned) size);

//         size = ft_strlcat(dst, src, sizeof(dst));

//         printf("Before:\n");
// 	printf("  src:\t\"%s\"\n", src);
// 	printf("  dst:\t\"%s\"\n", dst);
// 	printf("  size:\t%u\n", (unsigned) size);

//         return (0);
// }

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t size)
{
        size_t  dstlen;
        size_t  srclen;
        size_t  i;

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

int main ()
{
        char src[] = "tengo sueño";
        char dst[10];
        size_t size;

        size = ft_strlcat(dst, src, sizeof(dst));

        printf("%s\n", src);
        printf("%s\n", dst);
        printf("%zu\n", size);
        return (0);
}

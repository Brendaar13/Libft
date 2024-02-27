#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t num)
{
	unsigned char	*ptr_recorre;
	size_t			i;

	i = 0;
	ptr_recorre = ptr;
	while (i < num)
	{
		ptr_recorre[i] = (unsigned char)val;
		i++;
	}
	return (ptr);
}

/*int main ()
{
	char str[]= "Holaaa";

	printf("Before: %s\n", str);
	ft_memset(str,'A', 5);
	printf("After:%s\n", str);

	return 0;
}*/

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
	char buffer[10];
	ft_strlcpy(buffer, "HELLO 42!", 10);
	ft_memset(buffer, 'A', 5);
	printf("%s\n", buffer);

	return 0;
}*/ 
!!

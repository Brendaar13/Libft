#include <stdio.h>
int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
	str++;
	if (*str == '-')
	sign *= -1;
	if (*str == '-' || *str == '+')
	str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

int main()
{
	//en C las variables int tienen MAX_INT y MIN_INT (valor máximo y minimo), estos valores son 2147483647 y -2147483648 respectivamente. 
	//Todos los valores que salgan del rango(MIN_INT, MAX_INT) no se representan correctamente ya que los valores son superiores a 4 bytes por lo tanto hacen overflow en la memoria 
	char *str = "2147483647";
	int result = ft_atoi(str);

	printf("%d\n", result);
}
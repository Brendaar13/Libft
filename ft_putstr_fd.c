void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] && fd >= 0)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

int main ()
{
	int fd = 2;
	char *str = "Quiero un coco";

	printf("%d\n", fd);
	ft_putstr_fd(str, fd);

	return (0);
}

npi si funciona

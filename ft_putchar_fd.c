void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
}

int main ()
{
	int fd = 1;
	char c = 'A';
	char *result = ft_putchar_fd(c, fd);

	printf("%c\n", result);
	return (0);
}

aaaaaaa mis neuronas

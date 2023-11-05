t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	p = (t_list *)malloc(sizeof(*p));
	if (!p)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}
int main ()
{
	int data = 42;
	t_list *new = ft_lstnew(&data);
	printf("Nuevo nodo: %d\n", *((int *)new->content));

	return (0);
}

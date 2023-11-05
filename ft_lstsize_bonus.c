int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

int main ()
{
    t_list *node1 = (t_list *)malloc(sizeof(*node1));
    t_list *node2 = (t_list *)malloc(sizeof(*node2));

	node1->next = node2;

    int size = ft_lstsize(node1);

    printf("Tamaño de la lista: %d\n", size);

	return (0);
}

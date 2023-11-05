t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

int main ()
{
    t_list *node1 = (t_list *)malloc(sizeof(*node1));
    t_list *node2 = (t_list *)malloc(sizeof(*node2));

	node1->next = node2;

    t_list *last = ft_lstlast(node1);

    printf("Contenido último nodo: %p\n", last-> content);

	return (0);
}

creo que esta bien(?

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

int main() {
    t_list *list = NULL;
    int data1 = 55;
	int data2 = 42;t_list *node1 = (t_list *)malloc(sizeof(*node1));
    node1->content = &data1;
    node1->next = NULL;

    ft_lstadd_front(&list, node1);

    t_list *node2 = (t_list *)malloc(sizeof(*node2));
    node2->content = &data2;
    node2->next = NULL;

    ft_lstadd_front(&list, node2);

    t_list *current = list;
	
	printf("Data: %d\n", *((int *)(current->content)));
	current = current->next;

    return 0;
}

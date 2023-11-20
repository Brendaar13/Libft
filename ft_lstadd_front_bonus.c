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
	*lst = new; (quitar y mirar si pasa paco)
}

int main() {
    t_list *str1 = ft_lstnew("aaaaaa");
	t_list *str2 = ft_lstnew ("muerooo");

    ft_lstadd_front(&str2, str1);
	
	printf("Data: %s\n", (char *) str1->next->content);
    return 0;
}

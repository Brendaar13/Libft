void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
}

int main() {
	t_list *str1 = ft_lstnew("aaaaaa");
	t_list *str2 = ft_lstnew ("muerooo");

	ft_lstadd_back(&str1, str2);
	
	printf("Data: %s\n", (char *) str1->next->content);
	return 0;
}

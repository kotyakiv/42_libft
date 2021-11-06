#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*new_list_next;
	t_list	*temp;
	t_list	*new;

	if (!lst)
		return (NULL);
	new_list = NULL;
	temp = lst;
	while (temp)
	{
		new = ft_lstnew(f(temp)->content, f(temp)->content_size);
		if (!new)
			return (NULL);
		if (!new_list)
		{
			new_list = new;
			new_list_next = new_list;
		}
		else
		{
			new_list_next->next = new;
			new_list_next = new;
		}
		temp = lst->next;
	}
	return (new_list);
}

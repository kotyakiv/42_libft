#include <stdio.h>
#include "libft.h"

void del(void *s, size_t len)
{
	free(s);
}

void func(t_list *elem)
{
	ft_strcpy((char *)elem->content, "Yes");
}

t_list *func2(t_list *elem)
{
	t_list *new;

	new = ft_lstnew(elem->content, elem->content_size + 2);
	ft_strcat((char *)new->content, "NO");
	return (new);
}


int main()
{
	t_list *a;
	t_list *new;
	t_list *b;

	a = NULL;
	b = NULL;
	new = NULL;

	a = ft_lstnew("Hello", sizeof("Hello"));
	new = ft_lstnew("Maybe", sizeof("Maybe"));
	ft_lstadd(&a, new);
	new = ft_lstnew("Bye", sizeof("Bye"));
	ft_lstadd(&a, new);

	//ft_lstiter(a, func);

	new = a;
	for (size_t i = 0; i < 3; i++)
	{
		printf("%s\n", (char *)new->content);
		new = new->next;
	}



	b = ft_lstmap(a, func2);

	new = b;
	for (size_t i = 0; i < 3; i++)
	{
		printf("%s\n", (char *)new->content);
		new = new->next;
	}

	new = a;
	for (size_t i = 0; i < 3; i++)
	{
		printf("%s\n", (char *)new->content);
		new = new->next;
	}
	ft_lstdel(&a, del);	
	ft_lstdel(&b, del);

	


	return (0);
}
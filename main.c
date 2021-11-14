#include <stdio.h>
#include "libft.h"

void del(void *s, size_t len)
{
	free(s);
}

void func_iter(t_list *elem)
{
	elem->content_size += 3;
	ft_strcat((char *)elem->content, "Yes");
}

t_list *func_map(t_list *elem)
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

	new = ft_lstnew("Hello", sizeof("Hello"));
	ft_lstappend(&a, new);
	new = ft_lstnew("Maybe", sizeof("Maybe"));
	ft_lstappend(&a, new);
	new = ft_lstnew("Bye", sizeof("Bye"));
	ft_lstappend(&a, new);

	//ft_lstiter(a, func_iter);


	printf("Print list A elements\n");
	new = a;
	for (size_t i = 0; i < 3; i++)
	{
		printf("%s\n", (char *)new->content);
		new = new->next;
	}

	b = ft_lstmap(a, func_map);

	printf("Print list B elements\n");
	new = b;
	for (size_t i = 0; i < 3; i++)
	{
		printf("%s\n", (char *)new->content);
		new = new->next;
	}

	ft_lstdelelem(&a, 3, del);
	printf("Print list A elements again\n");
	new = a;
	for (size_t i = 0; i < ft_lstsize(a); i++)
	{
		printf("%s\n", (char *)new->content);
		new = new->next;
	}

	printf("Print list A elements size\n");
	printf("%ld\n", ft_lstsize(a));

	printf("Print list A elements 2\n");	
	new = ft_lstelem(&a, 2);
	if (new)
		printf("%s\n", (char *)new->content);
	else
		printf("Doesn't exist such element!\n");


	ft_lstdel(&a, del);	
	ft_lstdel(&b, del);

	return (0);
}
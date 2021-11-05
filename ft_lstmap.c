/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:04:40 by ykot              #+#    #+#             */
/*   Updated: 2021/11/04 22:40:49 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*temp;
	t_list	*new;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp)
	{
		new = ft_lstnew(f(temp), temp->content_size);
		if (!new)
			return (NULL);
		if (!new_list)
			new_list = new;
		else
		{
			ft_lstappend(&new_list, new);
		}
		temp = lst->next;
	}
	return (new_list);
}

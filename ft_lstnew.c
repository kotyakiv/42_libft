/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 23:20:45 by ykot              #+#    #+#             */
/*   Updated: 2021/12/03 12:45:32 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lstnew;

	lstnew = (t_list *)malloc(sizeof(t_list));
	if (!lstnew)
		return (NULL);
	if (!content)
	{
		lstnew->content = NULL;
		lstnew->content_size = 0;
		lstnew->next = NULL;
	}
	else
	{
		lstnew->content = (void *)malloc(content_size);
		if (!lstnew->content)
		{
			free(lstnew);
			return (NULL);
		}
		ft_memcpy(lstnew->content, content, content_size);
		lstnew->content_size = content_size;
		lstnew->next = NULL;
	}
	return (lstnew);
}

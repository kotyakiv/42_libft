/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:04:17 by ykot              #+#    #+#             */
/*   Updated: 2021/11/03 13:04:21 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstappend(t_list **begin_list, t_list *lstnew)
{
	t_list	*temp;

	temp = *begin_list;
	if (!(*begin_list))
		*begin_list = lstnew;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = lstnew;
	}
}

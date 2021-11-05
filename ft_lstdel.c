/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 23:20:15 by ykot              #+#    #+#             */
/*   Updated: 2021/11/05 13:52:47 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;
	t_list	*next;

	if (!*alst)
		return ;
	temp = (*alst);
	while (temp)
	{
		next = temp->next;
		ft_lstdelone(&temp, del);
		temp = next;
	}
	*alst = NULL;
}

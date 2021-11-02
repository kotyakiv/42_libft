/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:09:23 by ykot              #+#    #+#             */
/*   Updated: 2021/11/02 16:31:45 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len) ///not finished
{
	size_t	i;
	void	*newmem;

	newmem = ft_memalloc(len);
	ft_memcpy(newmem, src, len);
	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)newmem)[i];
		++i;
	}
	ft_memdel(&newmem);
	return (dst);
}

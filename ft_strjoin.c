/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 19:53:29 by ykot              #+#    #+#             */
/*   Updated: 2021/10/31 19:59:23 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*joinstr;
	size_t 	i;
	size_t	j;
	
	joinstr = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joinstr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		joinstr[i] = s1[i];
		++i;
	}
	j = 0;
	while (s2[j])
		joinstr[i++] = s2[j++];
	return (joinstr);
}

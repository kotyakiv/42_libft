/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 19:28:11 by ykot              #+#    #+#             */
/*   Updated: 2021/11/04 22:50:16 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	newstr = ft_strnew(len + 1);
	if (!newstr)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s) || ft_strlen(s) < len)
		return (NULL);
	j = start;
	while (i < len && s[j])
		newstr[i++] = s[j++];
	return (newstr);
}

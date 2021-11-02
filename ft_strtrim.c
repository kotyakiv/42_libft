/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:04:59 by ykot              #+#    #+#             */
/*   Updated: 2021/11/02 13:24:19 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*bufstr;
	char	*newstr;
	size_t	i;
	size_t	j;

	bufstr = ft_strnew(strlen(s) + 1);
	if (!bufstr)
		return (NULL);
	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	j = 0;
	while (s[i])
		bufstr[j++] = s[i++];
	while (--j && (bufstr[j] == ' ' || bufstr[j] == '\t' || bufstr[j] == '\n'))
		bufstr[j] = '\0';
	newstr = ft_strnew(ft_strlen(bufstr) + 1);
	if (!newstr)
		return (NULL);
	i = -1;
	while (bufstr[++i])
		newstr[i] = bufstr[i];
	ft_strdel(&bufstr);
	return (newstr);
}

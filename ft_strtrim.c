/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:04:59 by ykot              #+#    #+#             */
/*   Updated: 2021/11/04 11:31:46 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_clean_wspace (char **bufstr, const char **s, size_t s_len)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	while (i < s_len && ((*s)[i] == ' ' || (*s)[i] == '\t' || (*s)[i] == '\n'))
		i++;
	j = 0;
	while (i < s_len)
		(*bufstr)[j++] = (*s)[i++];
	while (--j && ((*bufstr)[j] == ' ' || (*bufstr)[j] == '\t' || (*bufstr)[j] == '\n'))
		(*bufstr)[j] = '\0';
}

char	*ft_strtrim(char const *s)
{
	char	*bufstr;
	char	*newstr;
	size_t	i;
	size_t	s_len;
	size_t	bufstr_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	bufstr = ft_strnew(s_len + 1);
	if (!bufstr)
		return (NULL);
	ft_clean_wspace(&bufstr, &s, s_len);
	bufstr_len = ft_strlen(bufstr);
	newstr = ft_strnew(bufstr_len + 1);
	if (!newstr)
		return (NULL);
	i = 0;
	while (bufstr[i])
	{
		newstr[i] = bufstr[i];
		i++;
	}
	ft_strdel(&bufstr);
	return (newstr);
}

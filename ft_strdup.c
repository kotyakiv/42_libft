/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 22:09:33 by ykot              #+#    #+#             */
/*   Updated: 2021/11/03 17:13:09 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		i;
	size_t		length;
	char		*str;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	str = (char *)malloc(sizeof(char *) * (length + 1));
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		++i;
	}
	str[i] = '\0';
	return (str);
}

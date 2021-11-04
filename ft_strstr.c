/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 17:39:07 by ykot              #+#    #+#             */
/*   Updated: 2021/11/03 22:34:00 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	fp;
	size_t	j;

	i = 0;
	if (!needle || *needle == '\0')
		return ((char *)haystack);
	if (!haystack)
		return (NULL);
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			fp = i;
			while (haystack[i] && haystack[i] == needle[j])
			{
				++i;
				++j;
				if (!needle[j])
					return ((char *)haystack + fp);
			}
			--i;
		}
		++i;
	}
	return (NULL);
}

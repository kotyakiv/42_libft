/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 11:45:18 by ykot              #+#    #+#             */
/*   Updated: 2021/11/03 22:56:33 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	fp;

	i = 0;
	if (!needle || *needle == '\0')
		return ((char *)haystack);
	if (!haystack)
		return (NULL);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			fp = i;
			while (haystack[i] && i < len && haystack[i] == needle[j])
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

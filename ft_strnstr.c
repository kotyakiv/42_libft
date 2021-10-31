/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 11:45:18 by ykot              #+#    #+#             */
/*   Updated: 2021/10/31 11:56:03 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;
	size_t c;
	size_t j;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			c = i;
			while (haystack[i++] == needle[j++] && haystack[i] && i < n)
			{
				if (!needle[j])
					return ((char *)haystack + c);
			}
			--i;
		}
		++i;
	}
	return ((char *)haystack);
}

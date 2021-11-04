/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:30:06 by ykot              #+#    #+#             */
/*   Updated: 2021/11/04 11:43:29 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nb_str(char const *str, char c)
{
	int i;
	int n;
	int flag;

	n = 0;
	i = 0;
	flag = 1;
	while (str[i])
	{
		if (str[i] != c && flag)
		{
			flag = 0;
			n++;
		}
		if (str[i] == c && !flag)
		{
			flag = 1;
		}
		i++;
	}
	return (n);
}

static char	*ft_strcut(char const *src, int *cnt, char c)
{
	int		i;
	int		l;
	int		j;
	char	*str;

	while (src[*cnt] == c)
		(*cnt)++;
	j = *cnt;
	l = 0;
	while (src[*cnt] != c)
	{
		l++;
		(*cnt)++;
	}
	str = (char*)malloc(sizeof(char) * (l + 1));
	i = 0;
	while (i < *cnt - j)
	{
		str[i] = src[*cnt - l + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{
	int		cnt;
	int		nb;
	int		i;
	char	**lines;

	cnt = 0;
	nb = ft_nb_str(s, c);
	lines = (char**)malloc(sizeof(char*) * (nb));
	i = 0;
	while (i < nb)
	{
		lines[i] = ft_strcut(s, &cnt, c);
		i++;
	}
	lines[i] = 0;
	return (lines);
}

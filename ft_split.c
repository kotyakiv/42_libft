/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:30:06 by ykot              #+#    #+#             */
/*   Updated: 2021/11/14 17:53:17 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_nb_str(char const *str, char c)
{
	int	i;
	int	n;
	int	flag;

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

static char *ft_strcut(char const *src, int *cnt, char c)
{
	int 	i;
	int 	l;
	int 	j;
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
	str = ft_strnew(l);
	if (!str)
		return (NULL);
	i = 0;
	while (i < *cnt - j)
	{
		str[i] = src[*cnt - l + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char **ft_split(char const *s, char c)
{
	int		cnt;
	int		nb;
	int 	i;
	char 	**lines;

	if (!s)
		return (NULL);
	cnt = 0;
	nb = ft_nb_str(s, c);
	lines = (char **)malloc(sizeof(char *) * (nb + 1));
	if (!lines)
		return (NULL);
	i = 0;
	while (i < nb)
	{
		lines[i] = ft_strcut(s, &cnt, c);
		i++;
	}
	lines[i] = 0;
	return (lines);
}

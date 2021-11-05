/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:58:58 by ykot              #+#    #+#             */
/*   Updated: 2021/11/05 18:55:41 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		total;
	int		minus;
	size_t	iter;
	size_t	i;

	iter = 0;
	minus = 1;
	total = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		++i;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ( (iter == 18 && minus == 1 && (str[i + 1] == '8' || str[i + 1] == '9'))
			|| (iter == 18 && minus == -1 && (str[i + 1] == '9' )) || iter > 18)
		{
			if (minus == 1)
				return (-1);
			else
				return (0);
		}
		total *= 10;
		total += str[i] - '0';
		++i;
		++iter;
	}
	return (total * minus);
}
//9223372036854775807
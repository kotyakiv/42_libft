/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:35:31 by ykot              #+#    #+#             */
/*   Updated: 2021/11/02 18:35:23 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sup_itoa(char **str, int minus, int n, int len)
{
	if (minus)
	{
		while (len > 0)
		{
			(*str)[len--] = n % 10 + '0';
			n /= 10;
		}
		(*str)[0] = '-';
	}
	else
	{
		while (len >= 0)
		{
			(*str)[len--] = n % 10 + '0';
			n /= 10;
		}
	}
}

size_t	ft_sup_count_len(int *minus, int n)
{
	int	len;

	len = 0;
	*minus = 0;
	if (n < 0)
	{
		++len;
		*minus = 1;
		n *= -1;
	}
	while (n > 9)
	{
		++len;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*newstr;
	size_t	len;
	int		minus;

	if (n == -2147483648)
	{
		newstr = ft_strdup("-2147483648");
		return (newstr);
	}
	else if (n == 0)
	{
		newstr = ft_strdup("0");
		return (newstr);
	}
	len = ft_sup_count_len(&minus, n);
	newstr = ft_strnew(len + 1);
	if (minus)
		n *= -1;
	ft_sup_itoa(&newstr, minus, n, len);
	return (newstr);
}

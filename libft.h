/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 20:10:34 by ykot              #+#    #+#             */
/*   Updated: 2021/10/30 15:39:53 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>

size_t	ft_strlen(const char *s);
int	ft_isdigit(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isprint(int c);

#endif
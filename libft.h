/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 20:10:34 by ykot              #+#    #+#             */
/*   Updated: 2021/10/30 19:18:18 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>

void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
char *ft_strcpy(char *dest, const char *src);
char *ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
size_t	ft_strlen(const char *s);
int	ft_atoi(const char *nptr);
int	ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isprint(int c);

#endif
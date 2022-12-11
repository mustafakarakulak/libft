/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:40:22 by mkarakul          #+#    #+#             */
/*   Updated: 2022/12/11 17:48:59 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

void	ft_bzero(void *s, size_t n);

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);

int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memset(void *b, int c, size_t len);

char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_strlen(char *s);

size_t	ft_strlcpy(char *restrict dst, const \
		char *restrict src, size_t dstsize);

char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char	*s1, const char	*s2, size_t	len);

int		ft_toupper(int c);
int		ft_tolower(int c);

#endif
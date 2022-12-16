/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:34:31 by mkarakul          #+#    #+#             */
/*   Updated: 2022/12/16 20:18:24 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		in;
	int		i2;
	char	*ptr;

	ft_strlen((char *)s1);
	ft_strlen((char *)s2);
	ptr = malloc(sizeof(*(char *)s1) + *(char *)s2);
	if (!s1 || !s2 || !(malloc(sizeof(*(char *)s1) + *(char *)s2)))
		return (NULL);
	in = 0;
	i2 = 0;
	while (s1[in])
		ptr[i2++] = s1[in++];
	in = 0;
	while (s2[in])
		ptr[i2++] = s2[in++];
	ptr[i2] = '\0';
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:03:21 by mkarakul          #+#    #+#             */
/*   Updated: 2022/12/13 14:03:55 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		pos;

	if (*to_find == '\0')
		return ((char *)str);
	pos = ft_strlen((char *)to_find);
	while (*str != '\0' && len-- >= pos)
	{
		if (*str == *to_find && ft_memcmp(str, to_find, pos) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:14:05 by mkarakul          #+#    #+#             */
/*   Updated: 2022/12/11 17:17:29 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*s1, const char	*s2, size_t	len)
{
	size_t	s2_len;
	size_t	fl;

	fl = 0;
	s2_len = ft_strlen(s2);
	if (!s2_len)
		return ((char *)s1);
	if (!s1 || !s2)
		return (NULL);
	if (!s2 || !s2[0])
		return ((char *)s1);
	if (len != 0)
	{
		while (*s1 && fl <= len - s2_len)
		{
			if (ft_strncmp(s1, s2, s2_len) == 0)
				return ((char *)s1);
				s1++;
				fl++;
		}
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:29:37 by mkarakul          #+#    #+#             */
/*   Updated: 2022/12/16 10:47:45 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	size_t	k;
	char	*pt;

	pt = (char *)src;
	k = 0;
	i = 0;
	while (i <= n)
	{
		((unsigned char *)dst)[i] = pt[k];
		i++;
		pt++;
	}
	return (dst);
}

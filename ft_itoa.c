/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:02:02 by mkarakul          #+#    #+#             */
/*   Updated: 2022/12/18 14:02:05 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*truefalse(void)
{
	char	*ret;

	ret = malloc(sizeof(char) * 2);
	ret[0] = '0';
	ret[1] = '\0';
	return (ret);
}

int	ft_numlen(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
		len++;
	while (nb)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*ret;
	const char	*dig;

	dig = "0123456789";
	len = ft_numlen(n);
	if (n == 0)
		return (truefalse());
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ret[len] = 0;
	if (n < 0)
		ret[0] = '-';
	while (n)
	{
		if (n > 0)
			ret[--len] = dig[n % 10];
		else
			ret[--len] = dig[n % 10 * -1];
		n /= 10;
	}
	return (ret);
}
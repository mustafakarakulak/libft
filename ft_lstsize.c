/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:36:00 by mkarakul          #+#    #+#             */
/*   Updated: 2022/12/20 13:36:11 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		count;

	temp = lst;
	count = 0;
	while (temp != NULL)
	{
		count++;
		temp = temp -> next;
	}
	return (count);
}
/*
int main()
{
	t_list *a;
	t_list *b;
	
	a = ft_lstnew("selam");
	b = ft_lstnew("naber");
	a->next = b;
	printf("%d", ft_lstsize(a));
}
*/
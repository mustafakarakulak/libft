/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:50:20 by mkarakul          #+#    #+#             */
/*   Updated: 2022/12/20 13:50:32 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (*lst != NULL)
	{
		temp = *lst;
		*lst = (*lst)->next;
		(*del)(temp->content);
		free(temp);
	}
}
/*
void del(void *del)
{
	free(del);
}
int main()
{
	t_list *a;
	t_list *b;
	a = ft_lstnew("data");
	b = ft_lstnew("data2");
	a->next = b;
	ft_lstclear(&a, del);
}
*/
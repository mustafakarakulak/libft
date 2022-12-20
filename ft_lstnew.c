/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:55:23 by mkarakul          #+#    #+#             */
/*   Updated: 2022/12/20 13:40:46 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

/*
int	main()
{
	t_list *a;
	a = malloc(sizeof(t_list));
	t_list *b;
	b = malloc(sizeof(t_list));
	a->content = "mustafa";
	b->content = "selam";
	a->next = b;

	printf("%s", a->next->content);
}
*/
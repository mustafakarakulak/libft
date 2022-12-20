/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:36:34 by mkarakul          #+#    #+#             */
/*   Updated: 2022/12/20 13:37:06 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (lst == NULL)
		return (NULL);
	temp = lst;
	while (temp -> next != NULL)
			temp = temp -> next;
	return (temp);
}
/*
int main()
{
	t_list *a;
	t_list *b;
	char *asd;
	a = ft_lstnew("limon");
	b = ft_lstnew("çilek");
	asd = malloc(sizeof(t_list *));
	asd = ft_lstlast(a)->content;
	printf("%s", asd);
}
*/
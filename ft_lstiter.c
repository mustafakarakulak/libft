/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:51:09 by mkarakul          #+#    #+#             */
/*   Updated: 2022/12/20 13:51:31 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *list, void (*f)(void *))
{
	t_list	*list_ptr;

	list_ptr = list;
	while (list_ptr != NULL)
	{
		(*f)(list_ptr->content);
		list_ptr = list_ptr->next;
	}
}
/*
 * işaretçi liste oluşturup diğer listelere de 
 * giderek onlara da f fonksiyonunu uyglamasını sağlar
*/
/*
void iter(void *a)
{
	printf("%s\n",a);
}
int main()
{
	t_list *a;
	t_list *b;
	a=ft_lstnew("sjbruh");
	b=ft_lstnew("norvecbro");
	
	a->next = b;
	ft_lstiter(a,iter);
}
*/
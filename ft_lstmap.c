/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:52:28 by mkarakul          #+#    #+#             */
/*   Updated: 2022/12/20 13:53:37 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del)(void *))
{
	t_list	*lst_map;
	t_list	*elem;

	if (lst == NULL)
		return (NULL);
	lst_map = NULL;
	while (lst != NULL)
	{
		elem = ft_lstnew((*f)(lst->content));
		if (elem == NULL)
			ft_lstclear(&elem, (*del));
		else
			ft_lstadd_back(&lst_map, elem);
		lst = lst->next;
	}
	return (lst_map);
}
/*
  * Bir liste alır, listedeki her öğeye bir işlev uygula
  r ve yeni bir liste döndürür.
  * fonksiyonun sonuçları
  *
  * lst bağlantılı bir listenin ilk elemanına işaretçi
  * f bir geçersiz işaretçi alan ve bir geçersiz işaretçi 
  * döndüren bir işlevin işaretçisi
  * del, tek bir geçersiz işaretçi bağımsız değişkeni alan 
  * ve hiçbir şey döndürmeyen bir işleve işaretçi.
  *
  * @return Yeni listenin ilk elemanına işaretçi.
  */

/*
void    *f(void *s)
{
    return(s);
}
void    del(void *s)
{
    s = 0;
	free s;
}
void iter(void *s)
{
    printf("%s\n", (char *)s);
}
int main(int argc, char const *argv[])
{
    t_list *a;
    t_list *b;
    t_list *c;
    a = ft_lstnew("hi");
    b = ft_lstnew("hello");
    ft_lstadd_back(&a, b);
    c = ft_lstmap(a, f, del);
    ft_lstiter(c, iter);
    return 0;
}
*/
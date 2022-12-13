/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:54:37 by mkarakul          #+#    #+#             */
/*   Updated: 2022/12/13 20:10:46 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char x[] = "mustafa";
	char y[] = "bilgisayar";
	char z[] = "serif";
	char v[] = "    -123";
	char u[] = "mus";
	int i = 'a';
	char p[] = "MUSTAFA";

	printf("%d\n", ft_strncmp(x, u, 3));
	printf("%d\n", ft_isdigit(i));
	printf("%s\n", ft_memmove(y, z, 5));
	printf("%d\n", ft_atoi(v));
	printf("%zu\n", ft_strlcat(v, x, 3));
	printf("%d\n", ft_toupper(i));
	printf("%d\n", ft_tolower(i));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:54:37 by mkarakul          #+#    #+#             */
/*   Updated: 2022/12/15 17:06:17 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	char x[] = "karakulak";
	char y[] = "mustafakarakulak";
	
	printf("%s\n", ft_substr(x, 0, 9));
}
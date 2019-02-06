/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 12:18:26 by sdremora          #+#    #+#             */
/*   Updated: 2019/02/06 12:57:24 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *str;

	printf("<=== indexof ===>\n");
	str = ft_strdup("123456");
	printf("%s -> index = %d\n", str, ft_str_indexof(str, '1'));
	str = ft_strdup("1111");
	printf("%s -> index = %d\n", str, ft_str_indexof(str, '1'));
	str = ft_strdup("003241");
	printf("%s -> index = %d\n", str, ft_str_indexof(str, '1'));
	str = ft_strdup("00sdfsdf2400");
	printf("%s -> index = %d\n", str, ft_str_indexof(str, '1'));

	printf("<=== n_indexof ===>\n");
	str = ft_strdup("321456");
	printf("%s -> index = %d\n", str, ft_str_n_indexof(str, 2, '1'));
	str = ft_strdup("321456");
	printf("%s -> index = %d\n", str, ft_str_n_indexof(str, 3, '1'));
	str = ft_strdup("321456");
	printf("%s -> index = %d\n", str, ft_str_n_indexof(str, 4, '1'));

	printf("<=== last_indexof ===>\n");
	str = ft_strdup("32456");
	printf("%s -> index = %d\n", str, ft_str_last_indexof(str, '1'));
	str = ft_strdup("13214561");
	printf("%s -> index = %d\n", str, ft_str_last_indexof(str, '1'));
	str = ft_strdup("1132456");
	printf("%s -> index = %d\n", str, ft_str_last_indexof(str, '1'));

	printf("<=== last_n_indexof ===>\n");
	str = ft_strdup("32456");
	printf("%s -> index = %d\n", str, ft_str_last_n_indexof(str, 3, '1'));
	str = ft_strdup("13214561");
	printf("%s -> index = %d\n", str, ft_str_last_n_indexof(str, 1, '1'));
	str = ft_strdup("13214561");
	printf("%s -> index = %d\n", str, ft_str_last_n_indexof(str, 0, '1'));
	str = ft_strdup("13214561");
	printf("%s -> index = %d\n", str, ft_str_last_n_indexof(str, -1, '1'));
	str = ft_strdup("1132156");
	printf("%s -> index = %d\n", str, ft_str_last_n_indexof(str, 2, '1'));
	str = ft_strdup("1132156");
	printf("%s -> index = %d\n", str, ft_str_last_n_indexof(str, 3, '1'));

}

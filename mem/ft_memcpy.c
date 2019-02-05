/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 22:54:32 by sdremora          #+#    #+#             */
/*   Updated: 2018/12/03 15:26:32 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (char unsigned *)dst;
	str2 = (char unsigned *)src;
	if (!dst && !src)
		return (dst);
	while (n-- > 0)
		*str1++ = *str2++;
	return (dst);
}

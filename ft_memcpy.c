/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 21:40:51 by dagarcia          #+#    #+#             */
/*   Updated: 2019/08/07 21:50:47 by dagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ch_dst;
	unsigned char	*ch_src;

	ch_dst = (unsigned char*)dst;
	ch_src = (unsigned char*)src;
	while (n--)
		ch_dst[n] = ch_src[n];
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 21:40:51 by dagarcia          #+#    #+#             */
/*   Updated: 2019/08/09 18:13:48 by dagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char*)dst;
	s = (char*)src;
	i = 0;
	if (!s && !d)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

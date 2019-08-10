/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 18:28:49 by dagarcia          #+#    #+#             */
/*   Updated: 2019/08/09 18:08:02 by dagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	i = 0;
	d = (char*)dst;
	s = (char*)src;
	if (s > d)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	if (s < d)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (d);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 18:27:59 by dagarcia          #+#    #+#             */
/*   Updated: 2019/08/08 18:28:03 by dagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ch_s1;
	unsigned char	*ch_s2;
	size_t			i;

	i = 0;
	ch_s1 = (unsigned char*)s1;
	ch_s2 = (unsigned char*)s2;
	while (i < n && ch_s1[i] == ch_s2[i])
		i++;
	if (i == n)
		return (0);
	else
		return (ch_s1[i] - ch_s2[i]);
}

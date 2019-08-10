/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 19:03:08 by dagarcia          #+#    #+#             */
/*   Updated: 2019/08/08 19:03:10 by dagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strwolsp(char const *s)
{
	size_t len;
	size_t len_sp;

	if (!*s)
		return (0);
	len = 0;
	while (*s)
	{
		len++;
		len_sp = (BL_WSP(*s) ? (len_sp + 1) : 0);
		s++;
	}
	return (len - (BL_WSP(*(s - 1)) ? len_sp : 0));
}

char			*ft_strtrim(char const *s)
{
	if (!s)
		return (NULL);
	while (*s && BL_WSP(*s))
		s++;
	return (ft_strsub(s, 0, ft_strwolsp(s)));
}

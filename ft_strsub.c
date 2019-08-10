/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 19:02:56 by dagarcia          #+#    #+#             */
/*   Updated: 2019/08/08 19:02:58 by dagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *ret;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start + len)
		return (NULL);
	ret = ft_strnew(len);
	while (len-- && ret)
		ret[len] = s[start + len];
	return (ret);
}

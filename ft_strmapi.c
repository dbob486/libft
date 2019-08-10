/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 19:00:27 by dagarcia          #+#    #+#             */
/*   Updated: 2019/08/08 19:00:29 by dagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*ret;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ret = ft_strnew(len);
	while (len-- > 0 && ret)
		ret[len] = f(len, s[len]);
	return (ret);
}

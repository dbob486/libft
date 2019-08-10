/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 19:00:16 by dagarcia          #+#    #+#             */
/*   Updated: 2019/08/08 19:00:18 by dagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	char	*ret;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ret = ft_strnew(len);
	while (len-- > 0 && ret)
		ret[len] = f(s[len]);
	return (ret);
}

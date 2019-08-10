/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 19:01:44 by dagarcia          #+#    #+#             */
/*   Updated: 2019/08/08 19:01:48 by dagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *ret;

	if (!(ret = (char*)malloc((size + 1) * sizeof(char))))
		return (NULL);
	ret[size] = 0;
	while (size-- > 0)
		ret[size] = 0;
	return (ret);
}

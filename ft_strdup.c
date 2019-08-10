/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 18:57:44 by dagarcia          #+#    #+#             */
/*   Updated: 2019/08/08 18:57:45 by dagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	char	*ret;

	i = 0;
	if (!(ret = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	while (*str)
		ret[i++] = *(str++);
	ret[i] = 0;
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 19:02:05 by dagarcia          #+#    #+#             */
/*   Updated: 2019/08/08 19:02:06 by dagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	if ((!len || !haystack) && !*needle)
		return ((char*)haystack);
	while (*haystack && len-- > 0)
	{
		i = 0;
		while (needle[i] && haystack[i] == needle[i] && i <= len)
			i++;
		if (!needle[i])
			return ((char*)haystack);
		haystack++;
	}
	return (0);
}

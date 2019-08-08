/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 20:23:12 by dagarcia          #+#    #+#             */
/*   Updated: 2019/08/07 22:06:45 by dagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *ret;

	if (!(ret = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	ret->content = NULL;
	ret->content_size = 0;
	if (content)
	{
		if (!(ret->content = ft_memalloc((content_size))))
		{
			free(ret);
			return (NULL);
		}
		ft_memcpy(ret->content, (void*)content, content_size);
		ret->content_size = content_size;
	}
	ret->next = NULL;
	return (ret);
}

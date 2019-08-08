/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:53:58 by dagarcia          #+#    #+#             */
/*   Updated: 2019/08/07 17:17:38 by dagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *pre;

	if (!*alst)
		return ;
	tmp = *alst;
	while (tmp->next)
	{
		pre = tmp;
		tmp = tmp->next;
		ft_lstdelone(&pre, del);
	}
	ft_lstdelone(&tmp, del);
	*alst = NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 18:30:56 by dagarcia          #+#    #+#             */
/*   Updated: 2019/08/08 18:31:02 by dagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int tmp;

	tmp = (unsigned int)n;
	if (n < 0)
	{
		ft_putchar('-');
		tmp = (unsigned int)n * -1;
	}
	if (tmp > 9)
		ft_putnbr(tmp / 10);
	ft_putchar(tmp % 10 + '0');
}

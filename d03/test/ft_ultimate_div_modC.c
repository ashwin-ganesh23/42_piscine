/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 01:12:45 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/15 01:12:48 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int quotient;
	int over;

	quotient = *a / *b;
	over = *a % *b;
	*a = quotient;
	*b = over; 

	printf("%d\n", *a);
	printf("%d\n", *b);
}

int		main(void)
{
	int g = 7;
	int e = 3;
	int *c;
	int *d;

	c = &g;
	d = &e;

	ft_ultimate_div_mod(c, d);

	return (0);
}
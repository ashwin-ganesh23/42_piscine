/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 20:09:16 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/14 20:09:19 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void 	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int 	main(void)
{
	int c, d;
	int *e;
	int *f;

	c = 5;
	d = 7;
	e = &c;
	f = &d;	
	ft_swap(e, f);
}

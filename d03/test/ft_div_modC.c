/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 23:04:00 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/14 23:04:02 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod);

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;

	printf("%d\n", *div);
	printf("%d\n", *mod);
}

int		main(void)
{
	int x = 5;
	int y = 2;

	int q;
	int r;

	int *p1;
	int *p2;

	p1 = &q;
	p2 = &r;

	ft_div_mod(x, y, p1, p2);
}

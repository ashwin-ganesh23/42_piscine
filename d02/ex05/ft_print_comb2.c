/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 16:07:46 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/31 16:07:48 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print2num(int c)
{
	int x;
	int y;

	x = c / 10;
	y = c % 10;
	ft_putchar(x + 48);
	ft_putchar(y + 48);
}


void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		while (b <= 99)
		{
			print2num(a);
			ft_putchar(' ');
			print2num(b);
			if (!(a == 98 && b == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
		b = a + 1;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
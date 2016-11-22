/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 22:58:48 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/16 22:58:50 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int test;

	test = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (test < nb)
	{
		if (nb % test == 0)
		{
			return (0);
		}
		test++;
	}
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	int count;

	count = 0;
	while (!count)
	{
		if (ft_is_prime(nb) != 0)
		{
			count = nb;
		}
		else
			nb++;
	}
	return (count);
}

int		main(void)
{
	printf("%d\n", ft_find_next_prime(8));
	return (0);
}
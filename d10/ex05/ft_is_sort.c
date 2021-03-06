/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 17:22:47 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/25 17:22:50 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int x;

	x = 0;
	while (x - 1 < length)
	{
		if (f(tab[x], tab[x + 1]) > 0)
			return (0);
	}
	return (1);
}

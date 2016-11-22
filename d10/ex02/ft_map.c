/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 16:50:32 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/25 16:50:33 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *new;

	i = 0;
	new = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		new[i] = f(tab[i]);
		i++;
	}
	return (new);
}

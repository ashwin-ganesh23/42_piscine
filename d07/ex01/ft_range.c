/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 12:32:26 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/20 12:32:28 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *all;
	int a;

	if (min >= max)
	{
		return (NULL);
	}
	all = (int*)malloc(sizeof(int) * (max - min));
	a = 0;
	while (min != max)
	{
		all[a] = min;
		min++;
		a++;
	}
	return (all);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 17:22:18 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/20 17:22:27 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int a;
	int *array;
	int size;

	if (min >= max)
	{
		*range = (void *)NULL;
		return (0);
	}
	size = max - min;
	array = (int*)malloc(sizeof(int) * (max - min));
	a = 0;
	while (min != max)
	{
		array[a] = min;
		min++;
		a++;
	}
	*range = array;
	return (a);
}

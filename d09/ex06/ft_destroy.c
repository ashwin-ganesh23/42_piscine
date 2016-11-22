/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 02:22:09 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/22 02:22:11 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_ultimator.h>

void	ft_destroy(char ***factory)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while (factory[a][b] != '\0')
	{
		while (factory[a][b] != '\0')
		{
			free(factory[a][b]);
			b++;
		}
		a++;
	}
}

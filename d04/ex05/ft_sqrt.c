/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 20:33:47 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/16 20:33:49 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int count;

	count = 1;
	if (nb > 1)
	{
		while (count <= nb / 2)
		{
			if (count * count == nb)
				return (count);
			count++;
		}
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	printf("%d\n", ft_sqrt(2147488281));
	return (1);
}
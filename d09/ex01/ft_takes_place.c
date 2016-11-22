/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 19:22:44 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/21 19:22:46 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int end;

	end = hour + 1;
	if (hour >= 0 && hour < 24)
	{
		if (hour < 11)
		{
			if(hour == 0)
				hour = 12;
			printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.\n", hour, end);
		}
		else if (hour == 11)
			printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 P.M.\n", hour, end);
		else if (hour == 23)
			printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 A.M.\n", hour - 12, end - 12);
		else if (hour > 11)
		{
			if (hour > 12)
				hour -= 12;
			end -= 12;
			printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M.\n", hour, end);
		}
	}
}

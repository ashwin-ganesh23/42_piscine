/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 16:58:00 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/15 16:58:02 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int total;

	total = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
	{
		if (nb == 0)
			return (0);
		return (1);
	}
	else if (power >= 1)
	{
		while (power >= 1)
		{
			total *= nb;
			power--;
		}
		return (total);
	}
	return (total);
}

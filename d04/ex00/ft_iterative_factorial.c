/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 15:32:27 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/15 15:32:30 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int count;
	int factorial;

	if (nb > 0)
	{
		count = nb;
		factorial = 1;
		while (count != 0)
		{
			factorial = factorial * count;
			count--;
		}
		return (factorial);
	}
	else
	{
		return (0);
	}
}

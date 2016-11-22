/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 12:28:38 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/22 12:28:40 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base % 2 == 0)
	{
		base = base / 2;
		ft_collatz_conjecture(base);
	}
	else if (base % 1 == 1 && base != 1)
	{
		base 
		ft_collatz_conjecture((3 * base) + 1);
	}
	if (base == 1)
	{
		return (base);
	} 
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 15:21:43 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/14 15:21:46 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_putchar(char a);

void 	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else 
	{
		ft_putchar('P');
	}
}

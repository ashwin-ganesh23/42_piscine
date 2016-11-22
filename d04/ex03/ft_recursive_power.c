/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 19:42:53 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/16 19:42:55 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		if (nb == 0)
		{
			return (0);
		}
		return (1);
	}
	else if (power == 1)
	{
		return (nb);
	}
	else if (power > 1)
	{
		return ((nb * ft_recursive_power(nb, power - 1)));
	}
	return (0);
}

int		main(void)
{
	printf("%d\n", ft_recursive_power(5, 2));
	return (0);
}

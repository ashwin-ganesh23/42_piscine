/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 21:43:12 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/19 21:43:14 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;
	int c;

	i = 0;
	while (str[i])
	{
		c = i;
		while (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		if (c == i)
		{
			return (0);
		}
	}
	return (1);
}

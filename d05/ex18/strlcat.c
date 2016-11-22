/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 20:51:15 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/31 20:51:16 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int destSize;
	int i;

	i = 0;
	destSize = 0;
	while (dest[destSize])
		destSize++;
	while (src[i])
	{
		if (destSize < size - 1)
			dest[destSize] = src[i];
		destSize++;
		i++;
	}
	dest[destSize] = '\0';
	return (destSize);
}

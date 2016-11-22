/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 12:20:46 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/20 12:20:48 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		strsize;
	int		a;
	char	*final;

	strsize = 0;
	a = 0;
	while (src[strsize])
		strsize++;
	final = (char*)malloc(sizeof(*final) * (strsize + 1));
	if (final == NULL)
		return (NULL);
	while (a < strsize)
	{
		final[a] = src[a];
		a++;
	}
	final[a] = '\0';
	return (final);
}

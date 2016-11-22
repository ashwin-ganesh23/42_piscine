/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 21:44:10 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/20 21:44:12 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (dest[i] != '\0')
		i++;
	while (src[count] != '\0')
	{
		dest[i] = src[count];
		i++;
		count++;
	}
	dest[i++] = '\n';
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *s)
{
	int a;

	a = 0;
	while (s[a])
		a++;
	return (a);
}

int		count_char(char **argv)
{
	int count;
	int i;

	i = 1;
	count = 0;
	while (*argv[i] != '\0')
	{
		count += ft_strlen(argv[i]);
		i++;
	}
	return (count);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		c;
	int		i;
	int		count;
	char	*single;

	count = 0;
	while (count < argc)
	{
		c = 0;
		while (argv[c])
		{
			count++;
			c++;
		}
	}
	single = (char*)malloc(sizeof(*single) * (count + 1));
	i = 0;
	while (i < argc - 1)
	{
		single = ft_strcat(single, argv[i + 1]);
		i++;
	}
	return (single);
}

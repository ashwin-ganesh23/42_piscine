/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 14:52:17 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/21 14:52:18 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	**count_words(char *c)
{
	int		i;
	int		count;
	char	**all;

	i = 0;
	count = 0;
	while (c[i] != '\0')
	{
		if (i == 0)
		{
			while (c[i] == '\n' || c[i] == ' ' || c[i] == '\t')
				i++;
		}
		while (c[i] != '\n' && c[i] != ' ' && c[i] != '\t')
			i++;
		while (c[i] == '\n' || c[i] == ' ' || c[i] == '\t')
			i++;
		count++;
	}
	all = (char **)malloc(sizeof(char *) * (count + 1));
	return (all);
}

char	*alloc_word(char *full, char *final, int b)
{
	int		len;
	int		c;
	int		a;
	char	*word;

	a = 0;
	while (full[b] == '\n' || full[b] == ' ' || full[b] == '\t')
		b++;
	c = b;
	while (full[c] != '\n' && full[c] != ' ' && full[c] != '\t')
	{
		c++;
		len++;
	}
	word = (char *)malloc(sizeof(char) * len + 1);
	while (full[b] != '\n' && full[b] != ' ' && full[b] != '\t')
	{
		word[a] = full[b];
		b++;
		a++;
	}
	word[a] = '\0';
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	int		c;
	int		a;
	char	**final;
	int		b;

	c = 0;
	a = 0;
	final = count_words(str);
	while (str[c] != '\0')
	{
		b = 0;
		final[a] = alloc_word(str, final[a], c);
		c += ft_strlen(final[a]);
		while (str[c] == '\n' || str[c] == ' ' || str[c] == '\t')
			c++;
		a++;
	}
	final[a] = NULL;
	return (final);
}

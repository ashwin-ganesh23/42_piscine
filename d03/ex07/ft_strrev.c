/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 02:32:09 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/15 02:32:11 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char reverse[100];
	int count;
	int start;

	start = 0;
	count = 0;
	while (str[count] != '\0')
	{
		reverse[count] = str[count];
		count++;
	}

	count--;
	while (count >= 0)
	{
		str[start] = reverse[count];
		count--;
		start++;
	}
	return (str);
}
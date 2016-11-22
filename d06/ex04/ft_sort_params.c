/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 16:20:17 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/19 16:20:18 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstrnew(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while ((s1[i] || s2[i]) && r == 0)
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			return (r);
		}
		i++;
	}
	return (r = s1[i] - s2[i]);
}

int		main(int argc, char *argv[])
{
	int		count;
	int		hold;
	char	*arguments;

	count = 1;
	while (count < argc - 1)
	{
		hold = count + 1;
		while (hold < argc)
		{
			if (ft_strcmp(argv[count], argv[hold]) > 0)
			{
				arguments = argv[count];
				argv[count] = argv[hold];
				argv[hold] = arguments;
			}
			hold++;
		}
		count++;
	}
	count = 0;
	while (++count < argc)
		ft_putstrnew(argv[count]);
	return (0);
}

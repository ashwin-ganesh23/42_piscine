/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 15:46:49 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/19 15:46:50 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
}

int		main(int argc, char *argv[])
{
	int count;

	count = 1;
	while (argc > count)
	{
		ft_putstr(argv[count]);
		ft_putchar('\n');
		count++;
	}
	return (0);
}

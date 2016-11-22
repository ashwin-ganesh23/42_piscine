/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 14:23:00 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/19 14:23:06 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		count;
	char	*file;
	int 	a;

	a = argc;
	count = 0;
	file = argv[0];
	while (file[count])
	{
		ft_putchar(file[count]);
		count++;
	}
	ft_putchar('\n');
	return (0);
}

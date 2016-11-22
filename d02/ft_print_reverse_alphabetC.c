/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 15:27:51 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/13 15:27:59 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

int     ft_print_reverse_alphabet(void)
{
    char x = 'z';
    while(x >= 'a')
    {
        ft_putchar(x);
        x--;
    }
    return (0);
}

int     main(void)
{
    ft_print_reverse_alphabet();
}

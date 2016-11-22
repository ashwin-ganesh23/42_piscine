/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 15:47:25 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/13 15:47:29 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
 
int     ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void ft_print_numbers(void)
{
  char x;
  x = '0';
    while(x <= '9')
      {
	ft_putchar(x);
	x++;
      }
}

int main(void)
{
  ft_print_numbers();
  return (0);
}

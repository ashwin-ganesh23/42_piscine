/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 20:00:22 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/14 20:00:25 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void 	ft_ultimate_ft(int *********nbr)
{
	printf("%d\n", *********nbr);
	*********nbr = 42;
	printf("%d\n", *********nbr);
}

int 	main(void)
{
	int a;
	a = 5;
	int *bd;
	int **cd;
	int ***dd;
	int ****ed;
	int *****fd;
	int ******gd;
	int *******hd;
	int ********id;
	int *********jd;
	bd = &a;
	cd = &bd;
	dd = &cd;
	ed = &dd;
	fd = &ed;
	gd = &fd;
	hd = &gd;
	id = &hd;
	jd = &id;
	ft_ultimate_ft(jd);
	printf("%d\n", **bd);
	return (0);

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 12:17:31 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/29 12:17:33 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void	*item)
{
	t_btree *new;

	new = NULL;
	new = (*t_btree)(malloc(sizeof(t_btree) + 1);
	if (new)
	{
		new->left = NULL;
		new->right = NULL;
		new->item = item;
	}
	return (new);
}

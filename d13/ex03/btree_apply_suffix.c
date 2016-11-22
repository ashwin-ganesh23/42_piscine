/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 15:09:24 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/29 15:09:28 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
	{
		if (root->left)
			btree_apply_prefix(root->left, applyf);
		if (root->right)
			btree_apply_prefix(root->right, applyf);
		applyf(root->item);
	}
}

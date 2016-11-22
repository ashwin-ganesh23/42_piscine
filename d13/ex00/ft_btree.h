/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 12:40:27 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/29 12:40:29 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_BTREE_H_
# define _FT_BTREE_H_

typedef struct 		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;

#endif _FT_BTREE_H_
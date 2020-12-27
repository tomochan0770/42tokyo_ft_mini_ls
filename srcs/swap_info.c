/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_info.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:59:33 by htomohit          #+#    #+#             */
/*   Updated: 2020/12/04 19:33:09 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_mini_ls.h"

void		swap_info(t_info *info1, t_info *info2)
{
	t_info tmp;

	tmp.name = info1->name;
	tmp.mtime = info1->mtime;
	info1->name = info2->name;
	info1->mtime = info2->mtime;
	info2->name = tmp.name;
	info2->mtime = tmp.mtime;
}

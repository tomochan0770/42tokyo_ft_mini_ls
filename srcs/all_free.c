/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 18:06:33 by htomohit          #+#    #+#             */
/*   Updated: 2020/12/07 00:35:25 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_mini_ls.h"

t_info *all_free(t_info *info, int idx)
{
	if (idx > 0)
	{
		while (idx)
		{
			free(info[idx].name);
			idx--;
		}
	}
	free(info);
	return (NULL);
}

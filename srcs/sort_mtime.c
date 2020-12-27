/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_mtime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 09:30:23 by htomohit          #+#    #+#             */
/*   Updated: 2020/12/04 21:27:26 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_mini_ls.h"

void	sort_mtime(t_info **info, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n - 1)
	{
		j = n - 1;
		while (j > i)
		{
			if ((*info)[j - 1].mtime > (*info)[j].mtime)
				swap_info(&(*info)[j - 1], &(*info)[j]);
			j--;
		}
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_by_mtime.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:43:15 by skurosu           #+#    #+#             */
/*   Updated: 2020/12/04 00:48:07 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

void		bubble_sort(t_info **info, int n, int (*cmp_f)(t_info, t_info))
{
	int i;
	int j;

	i = 0;
	while (i < n - 1)
	{
		j = n - 1;
		while (j > i)
		{
			if (cmp_f((*info)[j - 1], (*info)[j]))
				swap_info(&(*info)[j - 1], &(*info)[j]);
			j--;
		}
		i++;
	}
}

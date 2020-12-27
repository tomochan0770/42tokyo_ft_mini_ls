/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_name.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 02:32:20 by skurosu           #+#    #+#             */
/*   Updated: 2020/12/04 02:32:21 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

int		cmp_name(t_info i1, t_info i2)
{
	size_t i;

	if (i1.mtime != i2.mtime || i1.mtime_nsec != i2.mtime_nsec)
		return (0);
	i = 0;
	while (i1.name[i] && i2.name[i])
	{
		if (i1.name[i] != i2.name[i])
			break ;
		i++;
	}
	return (i1.name[i] - i2.name[i] < 0);
}

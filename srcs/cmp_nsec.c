/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_nsec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 02:32:07 by skurosu           #+#    #+#             */
/*   Updated: 2020/12/04 02:32:09 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

int		cmp_nsec(t_info i1, t_info i2)
{
	if (i1.mtime != i2.mtime)
		return (0);
	return (i1.mtime_nsec > i2.mtime_nsec);
}

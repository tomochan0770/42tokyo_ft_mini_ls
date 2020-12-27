/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_name.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:43:03 by skurosu           #+#    #+#             */
/*   Updated: 2020/12/04 00:46:39 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

void	print_name(t_info *info, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putstr_fd(info[i].name, STDOUT);
		ft_putstr_fd("\n", STDOUT);
		i++;
	}
}

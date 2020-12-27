/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_name.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:02:52 by htomohit          #+#    #+#             */
/*   Updated: 2020/12/04 19:30:09 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_mini_ls.h"

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

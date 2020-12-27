/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:29:40 by skurosu           #+#    #+#             */
/*   Updated: 2020/12/04 13:31:25 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

t_info	*free_all(t_info *info, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		free(info[i].name);
		i++;
	}
	free(info);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_dir.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 08:11:04 by htomohit          #+#    #+#             */
/*   Updated: 2020/12/07 00:36:51 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_mini_ls.h"

int			count_dir(char *path)
{
	struct dirent	*dirst;
	int				len;
	DIR				*dp;

	dp = opendir(path);
	len = 0;
	while ((dirst = readdir(dp)) != NULL)
		len++;
	closedir(dp);
	return (len);
}

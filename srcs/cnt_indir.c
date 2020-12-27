/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cnt_indir.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:39:50 by skurosu           #+#    #+#             */
/*   Updated: 2020/12/03 01:45:24 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

int	cnt_indir(char *path)
{
	DIR				*dir;
	struct dirent	*dent;
	int				cnt;

	if (!(dir = opendir(path)))
	{
		perror(path);
		return (-1);
	}
	cnt = 0;
	while ((dent = readdir(dir)) != NULL)
		if (dent->d_name[0] != '.')
			cnt++;
	closedir(dir);
	return (cnt);
}

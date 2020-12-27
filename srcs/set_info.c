/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:42:29 by skurosu           #+#    #+#             */
/*   Updated: 2020/12/04 13:28:14 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

static t_info	*perror_return(char *path)
{
	perror(path);
	return (NULL);
}

t_info			*set_info(char *path, int n)
{
	t_info			*info;
	DIR				*dir;
	struct dirent	*dent;
	struct stat		st;
	int				i;

	if (!(dir = opendir(path)))
		perror_return(path);
	if (!(info = malloc(sizeof(t_info) * n)))
		return (NULL);
	i = 0;
	while ((dent = readdir(dir)) != NULL)
	{
		if (dent->d_name[0] == '.')
			continue ;
		lstat(dent->d_name, &st);
		if (!(info[i].name = ft_strdup(dent->d_name)))
			return (free_all(info, i));
		info[i].mtime = st.st_mtime;
		info[i].mtime_nsec = st.st_mtimespec.tv_nsec;
		i++;
	}
	closedir(dir);
	return (info);
}

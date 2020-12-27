/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 08:42:19 by htomohit          #+#    #+#             */
/*   Updated: 2020/12/04 19:36:23 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_mini_ls.h"

t_info			*set_info(char *path, int n)
{
	t_info			*info;
	struct dirent	*dirst;
	struct stat		st;
	int				i;
	DIR				*dp;

	dp = opendir(path);
	if (!(info = malloc(sizeof(t_info) * n)))
		return (NULL);
	i = 0;
	while ((dirst = readdir(dp)) != NULL)
	{
		info[i].name = dirst->d_name;
		if (!(info[i].name = ft_strdup(dirst->d_name)))
			return (all_free(info, i));
		stat(dirst->d_name, &st);
		info[i].mtime = st.st_mtime;
		i++;
	}
	closedir(dp);
	return (info);
}

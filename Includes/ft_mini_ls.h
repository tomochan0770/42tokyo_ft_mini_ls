/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_ls.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 18:47:23 by htomohit          #+#    #+#             */
/*   Updated: 2020/12/04 19:28:22 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MINI_LS_H
# define FT_MINI_LS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <dirent.h>
# include <sys/stat.h>

# define STDOUT 1
# define STDERR 2

typedef struct	s_info
{
	char	*name;
	long	mtime;
}				t_info;

int				ft_strlen(char *str);
char			*ft_strdup(char *s1);
void			ft_putstr_fd(char *s, int fd);
void			print_name(t_info *info, int n);
int				count_dir(char *path);
void			swap_info(t_info *info1, t_info *info2);
void			sort_mtime(t_info **info, int n);
t_info			*set_info(char	*path, int n);
t_info			*all_free(t_info *info, int idx);

#endif

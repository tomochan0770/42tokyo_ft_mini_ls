/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_ls.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:39:28 by skurosu           #+#    #+#             */
/*   Updated: 2020/12/04 13:24:21 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MINI_LS_H
# define FT_MINI_LS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <dirent.h>
# include <sys/stat.h>

# define SUCCESS 0
# define FAILURE 1

# define STDOUT 1
# define STDERR 2

typedef struct	s_info
{
	char	*name;
	time_t	mtime;
	long	mtime_nsec;
}				t_info;

void			ft_putstr_fd(char *str, int fd);
void			print_name(t_info *info, int n);
int				cnt_indir(char *path);
void			swap_info(t_info *info1, t_info *info2);
int				ft_strcmp(char *s1, char *s2);
void			sort_by_mtime(t_info **info, int n);
t_info			*set_info(char *path, int n);
void			bubble_sort(t_info **info, int n, int (*cmp_f)(t_info, t_info));
int				cmp_mtime(t_info i1, t_info i2);
int				cmp_nsec(t_info i1, t_info i2);
int				cmp_name(t_info i1, t_info i2);
size_t			ft_strlen(char *str);
char			*ft_strdup(char *src);
t_info			*free_all(t_info *info, int n);

#endif

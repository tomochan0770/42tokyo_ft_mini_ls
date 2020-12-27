/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:40:04 by skurosu           #+#    #+#             */
/*   Updated: 2020/12/04 13:31:44 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

int		main(int argc, char **argv)
{
	int				n;
	t_info			*info;

	(void)argv;
	if (argc > 1)
	{
		ft_putstr_fd("Error: No command line arguments allowed\n", STDERR);
		return (FAILURE);
	}
	if ((n = cnt_indir("./")) == -1)
		return (FAILURE);
	if (!(info = set_info("./", n)))
		return (FAILURE);
	bubble_sort(&info, n, &cmp_mtime);
	bubble_sort(&info, n, &cmp_nsec);
	bubble_sort(&info, n, &cmp_name);
	print_name(info, n);
	free_all(info, n);
	return (SUCCESS);
}

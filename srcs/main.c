/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 02:59:27 by htomohit          #+#    #+#             */
/*   Updated: 2020/12/04 19:29:56 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_mini_ls.h"

int		main(int argc, char **argv)
{
	int		n;
	t_info	*info;

	(void)argv;
	if (argc > 1)
	{
		ft_putstr_fd("ERROR : Command line arguments is not allowed", STDERR);
		return (1);
	}
	if ((n = count_dir("./")) == -1)
		return (1);
	if (!(info = set_info("./", n)))
		return (1);
	sort_mtime(&info, n);
	print_name(info, n);
	free(info);
	return (0);
}

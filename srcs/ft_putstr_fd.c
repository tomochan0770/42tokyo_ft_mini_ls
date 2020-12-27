/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 07:54:19 by htomohit          #+#    #+#             */
/*   Updated: 2020/12/04 19:28:45 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_mini_ls.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		len;

	if (s)
	{
		len = 0;
		while (s[len])
			len++;
		write(fd, s, len);
	}
}

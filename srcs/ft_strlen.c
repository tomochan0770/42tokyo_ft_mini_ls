/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:55:39 by htomohit          #+#    #+#             */
/*   Updated: 2020/12/04 19:31:45 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_mini_ls.h"

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

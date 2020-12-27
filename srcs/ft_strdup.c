/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 18:09:26 by htomohit          #+#    #+#             */
/*   Updated: 2020/12/04 19:36:11 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_mini_ls.h"

char		*ft_strdup(char *s1)
{
	char	*dest;
	int		i;
	int		len;

	len = ft_strlen(s1);
	if (!(dest = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 07:05:39 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/02 02:21:36 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int	res;

	if (!s1 || !s2)
		return (0);
	res = ft_strcmp(s1, s2);
	return ((res == 0) ? 1 : 0);
}

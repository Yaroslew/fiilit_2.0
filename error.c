/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <pcorlys-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 07:15:31 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/25 07:40:58 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	it_just_error(char c)
{
	ft_putstr("error ");
	ft_putchar(c);
	ft_putchar('\n');
	exit(0);
}

void		message_error(int a, char c)
{
	if (a == 1)
		it_just_error(c);
	ft_putstr("usage: fillit target \n");
	exit(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 14:39:12 by telain            #+#    #+#             */
/*   Updated: 2016/02/06 19:25:05 by cchicote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	put_error(int error)
{
	ft_putstr("error\n");
	error = 1;
}

void	no_error(void)
{
	ft_putstr("\033[0;32m");
	ft_putendl("Fin.");
}

int		main(int ac, char **av)
{
	int		error;

	error = 0;
	if (ac != 2)
		return (0);
	error = start(av[1]);
	(error < 0) ? put_error(error) : error;
	return (0);
}

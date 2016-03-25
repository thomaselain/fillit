/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <telain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 18:17:45 by telain            #+#    #+#             */
/*   Updated: 2016/03/11 21:08:45 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	read_file(t_env *e)
{
	int		fd;
	char	text[22];
	int		ret;

	fd = open(e->file, O_RDONLY, S_IREAD);
	while ((ret = read(fd, text, 1) > 0))
	{
		text[ret] = '\0';
		e->buf = ft_strjoin(e->buf, text);
	}
	close(fd);
}

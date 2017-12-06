/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 10:46:40 by ecloete           #+#    #+#             */
/*   Updated: 2017/12/04 10:47:23 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	save_player(t_env *e, int fd)
{
	char *line;

	line = "\0";
	get_next_line(fd, &line);
	if (ft_atoi(line + 10) == 1)
	{
		e->plyr = 'O';
		e->opp = 'X';
	}
	else
	{
		e->plyr = 'X';
		e->opp = 'O';
	}
}

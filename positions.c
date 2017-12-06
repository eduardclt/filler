/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 10:46:59 by ecloete           #+#    #+#             */
/*   Updated: 2017/12/04 10:47:13 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	positions(t_env *e)
{
	int i;
	int j;

	i = 0;
	e->opp = (e->plyr == 'O') ? 'X' : 'O';
	while (i < e->map_y)
	{
		j = 0;
		while (j < e->map_x)
		{
			if (e->map[i][j] == e->opp)
			{
				e->opp_pos_x = j;
				e->opp_pos_y = i;
			}
			if (e->map[i][j] == e->plyr)
			{
				e->plyr_pos_x = j;
				e->plyr_pos_y = i;
			}
			j++;
		}
		i++;
	}
	e->up_or_down = (e->opp_pos_y > e->plyr_pos_y) ? 1 : 0;
}

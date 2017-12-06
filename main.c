/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 10:45:43 by ecloete           #+#    #+#             */
/*   Updated: 2017/12/04 10:52:24 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		main(void)
{
	t_env	e;
	int		fd;
	int		flag;

	flag = 0;
	e.exit = 1;
	fd = 0;
	save_player(&e, fd);
	while (1)
	{
		start(&e, flag, fd);
		myfree(e.map, e.map_y);
		myfree(e.piece, e.height_p);
		if (e.exit == 0)
			return (0);
	}
}

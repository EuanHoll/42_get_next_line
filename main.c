/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 10:22:19 by marvin         #+#    #+#                */
/*   Updated: 2019/04/17 11:50:58 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*c;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		c = NULL;
		while (get_next_line(fd, &c) > 0)
		{
			ft_putendl(c);
			ft_strdel(&c);
		}
		ft_putstr(c);
		free(c);
		close(fd);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/11 15:07:17 by ehollidg       #+#    #+#                */
/*   Updated: 2019/04/12 13:55:31 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32

# include "libft/includes/libft.h"

typedef struct	s_gnl
{
	int			fd;
	char		fds[BUFF_SIZE + 1];
}				t_gnl;

int				get_next_line(const int fd, char **line);

#endif

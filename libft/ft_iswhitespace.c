/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iswhitespace.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 16:00:12 by ehollidg       #+#    #+#                */
/*   Updated: 2019/03/22 16:01:38 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iswhitespace(int c)
{
	return (c == ' ' || c == '\n' || c == '\t' ||
		c == '\r' || c == '\v' || c == '\f');
}

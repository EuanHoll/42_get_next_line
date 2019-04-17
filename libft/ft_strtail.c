/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtail.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/05 11:50:08 by ehollidg       #+#    #+#                */
/*   Updated: 2019/04/12 14:18:17 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtail(char *str, size_t i)
{
	char		*s1;
	size_t		start;

	if (!str)
		return (NULL);
	if ((int)(ft_strlen(str) - i) < 0)
		return (ft_strnew(0));
	s1 = ft_strnew(ft_strlen(str) - i);
	if (!s1)
		return (NULL);
	start = i;
	while (str[i])
	{
		s1[i - start] = str[i];
		i++;
	}
	return (s1);
}

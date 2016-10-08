/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 18:02:16 by myoung            #+#    #+#             */
/*   Updated: 2016/10/08 13:55:23 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	unsigned int	i;
**
**	i = 0;
**	while (s1[i] && s2[i])
**	{
**		if (s1[i] != s2[i])
**			return (0);
**		i++;
**	}
**	if (!s1[i] && !s2[i])
**		return (1);
**	else
**		return (0);
*/

int	ft_strequ(const char *s1, const char *s2)
{
	if (!s1 && !s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	return (!ft_strcmp(s1, s2));
}

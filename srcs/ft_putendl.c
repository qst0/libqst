/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 12:37:54 by myoung            #+#    #+#             */
/*   Updated: 2016/10/19 15:32:27 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putendl(const char *s)
{
	if (s)
	{
		ft_putstr(s);
		ft_putchar('\n');
	}
}

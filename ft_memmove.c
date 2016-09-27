/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 12:10:20 by myoung            #+#    #+#             */
/*   Updated: 2016/09/25 23:11:06 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	signed char		op;
	size_t			cur;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	if (dst < src)
	{
		op = 1;
		cur = 0;
	}
	else
	{
		op = -1;
		cur = n - 1;
		n = -1;
	}
	while (cur != n)
	{
		d[cur] = s[cur];
		cur += op;
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 12:10:20 by myoung            #+#    #+#             */
/*   Updated: 2016/09/23 12:10:22 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	signed char		op;
	size_t			end;
	size_t			cur;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char*) src;
	d = (unsigned char*) dst;
	if (dst < src)
	{
		op = 1;
		cur = 0;
		end = n;
	} else {
		op = -1;
		cur = n - 1;
		end = -1;
	}
	while (cur != end)
	{
		d[cur] = s[cur];
		cur += op;
	}
	return (dst);
}



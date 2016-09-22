/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 10:18:21 by myoung            #+#    #+#             */
/*   Updated: 2016/09/22 10:20:49 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*mem;

	i = 0;
	mem = (unsigned char *) b;
	while (i < len)
		mem[i++] = (unsigned char) c;
	return (b);
}

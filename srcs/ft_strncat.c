/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 13:33:10 by myoung            #+#    #+#             */
/*   Updated: 2016/10/19 15:32:35 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (s1[j])
		j++;
	while (s2[i] && i < n)
		s1[j++] = s2[i++];
	s1[j] = '\0';
	return (s1);
}

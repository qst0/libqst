/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 18:22:32 by myoung            #+#    #+#             */
/*   Updated: 2016/12/22 07:04:52 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** if the string is null return null
** make a new string the size of len, with ft_stnew
** check and make sure it worked.
** i = 0
** iterate while i < len
**  set the postition i in new to the start + i of the str
**  itterate i
**
**  return the new str you made
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;

	if (!s)
		return (NULL);
	new = ft_strnew(len);
	i = 0;
	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	return (new);
}

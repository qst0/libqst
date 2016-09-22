/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:14:43 by myoung            #+#    #+#             */
/*   Updated: 2016/09/22 13:50:28 by myoung           ###   ########.fr       */
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

#include <stdio.h>
void		test_memset()
{
	printf("Testing memset vs ft_memset\n\n");
	printf("ft_memset:\n");
	char testdata[10] = "123456789";
	printf("%s\n", testdata);
	printf("%s\n", (char*) ft_memset((void*) testdata, 'a', 9));

	printf("\nmemset:\n");
	char testdatalib[10] = "123456789";
	printf("%s\n", testdatalib);
	printf("%s\n", (char*) memset((void*) testdatalib, 'a', 9));

}

void		ft_bzero(void *s, size_t n)
{
	unsigned char	*mem;
	int				i;

	i = 0;
	mem = (unsigned char*) s;
	while (i < n)
		mem[i++] = 0;
}

void		test_bzero()
{
	printf("Testing bzero vs ft_bzero\n\n");
	printf("ft_bezo:\n");
	char testdata[10] = "123456789";
	ft_bzero(testdata, 10);
	if (testdata[9] == 0)
		printf("Yes");
	else
		printf("No dice");

	printf("\nbzero:\n");
	char testdatalib[10] = "123456789";
	ft_bzero(testdatalib, 10);
	if (testdatalib[9] == 0)
		printf("Yes");
}

// ABOVE ALREADY HAVE own files.

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	unsigned int	i;

	s = (unsigned char*) src;
	d = (unsigned char*) dst;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	unsigned int	i;

	s = (unsigned char*) src;
	d = (unsigned char*) dst;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
		if (s[i-1] == (unsigned char) c)
			return ((void*) &dst[i]);
	}
	return (NULL);
}

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

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem;
	int				i;

	mem = (unsigned char*) s;
	i = 0;
	while (i < n)
	{
		if (mem[i] == (unsigned char) c)
			return ((void*) &s[i]);
	}
	return (NULL);
}

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1v;
	unsigned char	*s2v;
	int				i;

	s1v = (unsigned char*) s1;
	s2v = (unsigned char*) s2;
	i = 0;
	while(s1v[i] == s2v[i] && i < n)
		i++;
	return (s1v[i] - s2v[i]);
}

size_t		ft_strlen(const char *s)
{
	size_t			len;

	len = 0;
	while(s[len])
		len++;
	return (len);
}

#include <stdlib.h>
char		*ft_strdup(const char *s1)
{
	char			*copy;
	int				len;

	len = 0;
	while(s1[len])
		len++;
	copy = (char*) malloc(sizeof(char) * (len + 1));
	len = 0;
	while (s1[len])
	{
		copy[len] = s1[len];
		len++;
	}
	copy[len] = '\0';
	return (copy);
}

char		*ft_strcpy(char *dst, const char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char		*ft_strncpy(char *dst, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i]  && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

char		*ft_strcat(char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (s1[j])
		j++;
	while (s2[i])
		s1[j++] = s2[i++];
	s1[j] = '\0';
	return (s1);
}

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

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	int j;
	int src_size;
	int dst_size;
	int space_left;

	i = 0;
	dst_size = 0;
	space_left = size;
	while (src[i] != '\0')
		i++;
	src_size = i;
	while (dst[dst_size] != '\0' && space_left-- != 0)
		dst_size++;
	space_left = size - dst_size;
	if (space_left == 0)
		return ((size_t) (size + src_size));
	i = 0;
	j = dst_size;
	while (src[i] != 0 && space_left-- > 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return ((size_t) (src_size + dst_size));
}

char		*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while(s[i])
	{
		if(s[i] == (char) c)
			return ((char*) &s[i]);
		i++;
	}
	return (NULL);
}

char		*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while(s[i])
		i++;
	i--;
	while(i > -1)
	{
		if(s[i] == (char) c)
			return ((char*) &s[i]);
		i--;
	}
	return (NULL);
}

char		*ft_strstr(const char *big, const char *little)
{
	int				i;
	int				find_index;
	int				remember;

	find_index = 0;
	i = 0;
	if (little[0] == '\0')
		return ((char*) &big[0]);
	while (big[i] != '\0')
	{
		if (big[i] == little[find_index])
		{
			remember = i;
			while (big[i] == little[find_index])
			{
				if (little[find_index++ + 1] == '\0')
					return ((char*) &big[remember]);
				i++;
			}
			find_index = 0;
			i = remember;
		}
		i++;
	}
	return (0);
}

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	int				i;
	int				find_index;
	int				remember;

	find_index = 0;
	i = 0;
	if (little[0] == '\0')
		return ((char*) &big[0]);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[find_index])
		{
			remember = i;
			while (big[i] == little[find_index] && i < len)
			{
				if (little[find_index++ + 1] == '\0')
					return ((char*) &big[remember]);
				i++;
			}
			find_index = 0;
			i = remember;
		}
		i++;
	}
	return (0);
}

int			ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*s1v;
	unsigned char	*s2v;
	int				i;

	s1v = (unsigned char*) s1;
	s2v = (unsigned char*) s2;
	i = 0;
	while(s1[i] && s1v[i] == s2v[i])
		i++;
	return (s1v[i] - s2v[i]);
}

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1v;
	unsigned char	*s2v;
	int				i;

	s1v = (unsigned char*) s1;
	s2v = (unsigned char*) s2;
	i = 0;
	while(s1[i] && s1v[i] == s2v[i] && i < n)
		i++;
	return (s1v[i] - s2v[i]);
}

int			ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	result;

	i = 0;
	while (str[0] == '\t' || str[0] == '\n' || str[0] == '\v' ||
			str[0] == '\f' || str[0] == ' ' || str[0] == '\r')
		str++;
	result = 0;
	sign = (str[0] == '-' ? -1 : 1);
	str = (str[0] == '-' || str[0] == '+') ? str + 1 : str;
	while (str[0] == '0')
		str++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
		result = result * 10 + (str[i++] - '0');
	if (i > 19 || result >= 9223372036854775808ULL)
		return (sign == 1 ? -1 : 0);
	return (result * sign);
}

int			ft_isalpha(int c)
{
	if (c >= 0101 && c <= 0172)
		return (1);
	return (0);
}

int			ft_isdigit(int c)
{
	if (c >= 060 && c <= 071)
		return (1);
	return (0);
}

int			ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

int			ft_isascii(int c)
{
	if (c >= 00 && c <= 0177)
		return (1);
	return (0);
}

int			ft_isprint(int c)
{
	if (c >= 040 && c <= 0176)
		return (1);
	return (0);
}

int			ft_toupper(int c)
{
	if (c >= 0141 && c <= 0173)
		c -= 32;
	return (c);
}

int			ft_tolower(int c)
{
	if (c >= 0101 && c <= 0132)
		c += 32;
	return (c);
}

int			main(void)
{
	test_memset();
	test_bzero();
	return (0);
}

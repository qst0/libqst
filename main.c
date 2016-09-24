/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:14:43 by myoung            #+#    #+#             */
/*   Updated: 2016/09/23 17:30:37 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
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

void		*cmp_memcpy(void *dst, const void *src, size_t n)
{
	void	*dst2;
	void	*src2;

	dst2 = malloc(n);
	src2 = malloc(n);
	dst2 = ft_memcpy(dst2, dst, n);
	src2 = ft_memcpy(src2, src, n);
	ft_memcpy(dst, src, n);
	memcpy(dst2, src2, n);
	return (dst2);
}

void		test_memcpy()
{
	char	src[10] = "123456789\0";
	char	dst[10] = "XXXXXXXXX\0";
	size_t	n;

	n = 10;
	printf("Lib: %s\nYou: %s\n",cmp_memcpy(dst, src, n), dst);
}

void		*cmp_memccpy(void *dst, const void *src, int c, size_t n)
{
	void	*dst2;
	void	*src2;

	dst2 = malloc(n);
	src2 = malloc(n);
	dst2 = ft_memcpy(dst2, dst, n);
	src2 = ft_memcpy(src2, src, n);
	memccpy(dst2, src2, c, n);
	printf("Return Lib: %s\n",memccpy(dst, src, c,  n));
	printf("Return You: %s\n",ft_memccpy(dst, src, c,  n));
	return (dst2);
}

void		test_memccpy()
{
	char	src[10] = "123456789\0";
	char	dst[10] = "XXXXXXXXX\0";
	size_t	n;
	int		c;

	n = 10;
	c =	'4';
	printf("Lib: %s\nYou: %s\n",cmp_memccpy(dst, src, c, n), dst);
}

void		test_memchr()
{
	char	src[10] = "123456789\0";
	size_t	n;
	int		c;

	n = 10;
	c =	'4';
	printf("Lib: %s\nYou: %s\n", memchr(src, c, n), ft_memchr(src, c, n));
}

void		test_memcmp()
{
	char s1[7] = "apples";
	char s2[8] = "oranges";
	char s3[5] = "apps";

	printf("Test memcmp vs ft_memcmp:\n");
	printf("Lib: ");
	printf("%d", memcmp(s1,s2, 7));
	printf(" %d\n", memcmp(s1,s3, 3));
	printf("You: ");
	printf("%d", ft_memcmp(s1,s2, 7));
	printf(" %d\n", ft_memcmp(s1,s3, 3));
}


void		test_strlen()
{
	char s1[42] = "Mason";
	char s2[10] = "123456789";

	printf("Test strlen vs ft_strlen\n");
	printf("Lib: ");
	printf("%lu %lu\n", strlen(s1), strlen(s2));
	printf("You: ");
	printf("%lu %lu\n", ft_strlen(s1), ft_strlen(s2));
}

void		test_strdup(){}
void		test_strcpy(){}
void		test_strncpy(){}
void		test_strcat(){}
void		test_strncat(){}
void		test_strlcat(){}
void		test_strchr(){}
void		test_strrchr(){}
void		test_strstr(){}
void		test_strnstr(){}
void		test_strcmp(){}
void		test_strncmp(){}
void		test_atoi(){}
void		test_isalpha(){}
void		test_isdigit(){}
void		test_isalnum(){}
void		test_isascii(){}
void		test_isprint(){}
void		test_toupper(){}
void		test_tolower(){}

int			main(void)
{
//	test_memset();
//	test_bzero();
//	test_memcpy();
//	test_memccpy();
//	test_memchr();
//	test_memcmp();
//	test_strlen();
//	test_strdup();
//	test_strcpy();
//	test_strncpy();
//	test_strcat();
//	test_strncat();
//	test_strlcat();
//	test_strchr();
//	test_strrchr();
//	test_strstr();
//	test_strnstr();
//	test_strcmp();
//	test_strncmp();
//	test_atoi();
//	test_isalpha();
//	test_isdigit();
//	test_isalnum();
//	test_isascii();
//	test_isprint();
//	test_toupper();
//	test_tolower();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 10:01:55 by myoung            #+#    #+#             */
/*   Updated: 2016/09/22 10:16:07 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcmp(const void *s1, const void *s2, size_t n);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s1);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, unsigned int n);
char		*strcat(char *s1, const char *s2);
char		*strncat(char *s1, const char *s2, size_t n);
size_t		*strlcat(char *s1, const char *s2, size_t n);
char		*strchr(const char *s, int c);
char		*strrchr(const char *s, int c);
char		*strstr(const char *big, const char *little);
char		*strnstr(const char *big, const char *little, size_t len);
int			strcmp(const char *s1, const char *s2);
int			strncmp(const char *s1, const char *s2, size_t n);
int			atoi(const char *str);
int			isalpha(int c);
int			isdigit(int c);
int			isalnum(int c);
int			isascii(int c);
int			isprint(int c);
int			toupper(int c);
int			tolower(int c);

#endif

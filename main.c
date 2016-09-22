#include "libft.h"


//ft_memset.c
//ft_bzero.c
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

/*
char		*ft_strdup(const char *s1);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, unsigned int n);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);

size_t		*ft_strlcat(char *s1, const char *s2, size_t n);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *big, const char *little);
char		*ft_strnstr(const char *big, const char *little, size_t len);
*/

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

/*
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_atoi(const char *str);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
*/

int			main(void)
{
	return (0);
}

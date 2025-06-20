#ifndef LIBFT_H

# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t nitems, size_t size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isdigit(char c);
int					ft_isascii(int i);
int					ft_isprint(char c);
void				*ft_memchr(const void *s, int c, size_t n);
size_t				ft_strlen(const char *s);
void				*ft_memset(void *b, int c, size_t len);
char				*ft_strchr(const char *str, int c);
void				*ft_memcpy(void *dest, const void *src, size_t n);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
void				*ft_memmove(void *str1, const void *str2, size_t n);
int					ft_tolower(char a);
int					ft_toupper(char a);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strrchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
char				*ft_strdup(const char *s);
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <cwagner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:57:06 by cwagner           #+#    #+#             */
/*   Updated: 2015/01/21 22:19:43 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# define BUF_SIZE 4096
# define FAILURE -1
# define SUCCESS 0
# define CONTINUE -2
# define FT_TRUE 1
# define FT_FALSE 0
# define EOT "Qqengn48eiyt0+87\"ol`dm"

typedef unsigned int			t_ui;
typedef struct s_charlist		t_charlist;
typedef struct s_list			t_list;

struct			s_list
{
	void		*content;
	size_t		content_size;
	t_list		*next;
};

struct			s_charlist
{
	char		*val;
	t_charlist	*next;
};

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

t_charlist		*ft_newlchar(char *str);
void			ft_addblchar(t_charlist **list, char *str);
t_charlist		*ft_lstsplit(char *str, char c);

int				get_next_line(int const fd, char **line);
int				gnl_sock(int const fd, char **line);

void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *s1, const void *s2, size_t n);
void			*ft_mem_not_null_cpy(void *s1, void *s2, size_t n);
void			*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void			*ft_memmove(void *s1, const void *s2, size_t n);
void			*ft_memchr(void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);

void			ft_swap(int *a, int *b);

size_t			ft_strlen(const char *str);
char			*ft_strdup(const char *s1);
char			*ft_strcpy(char *s1, const char *s2);
char			*ft_strncpy(char *s1, const char *s2, size_t n);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strchri(const char *s, char c);
char			*ft_strnjoin(const char *s1, const char *s2, int n);
char			*ft_strstr(const char *s1, const char *s2);
char			*ft_strnstr(const char *s1, const char *s2, size_t n);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strfreejoin(char **s1, char const *s2);
char			*ft_glue(int nb_arg, ...);
char			*ft_strrev(char const *s1);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
char			**ft_strsplitwhite(char const *s);
char			**ft_strsplitwhiteand(char const *s);
char			**ft_strtabdup(char **table);
int				ft_freechartab(char ***table);
int				ft_chartablength(char **table);

int				ft_error(char *str);
void			ft_error_exit(char *str, int i);
int				ft_strcheck(char *s, int (*f)(int));
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int				ft_atoi(const char *str);
char			*ft_itoa(int n);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);

void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putendl(char const *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putendl_sock(char const *s, int fd);
void			ft_putendleot_sock(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_printtabchar(char **table);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htagrour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:09:03 by htagrour          #+#    #+#             */
/*   Updated: 2019/10/20 23:24:42 by htagrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int				ft_memcmp(const	void *s1, const void *s2, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *b, size_t n);
void			*ft_memmove(void *des, const void *src, size_t n);
void			*ft_memccpy(void *des, const void *src, int c, size_t n);
void			*ft_memchr(const void *src, int c, size_t n);
void			*ft_memcpy(void *des, const void *src, size_t n);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *str);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *s);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isprint(int c);
int				ft_isascii(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_atoi(const char *str);
char			*ft_strchr(const char *src, int c);
char			*ft_strrchr(const char *src, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *s1, const char *b, size_t n);
char			*ft_substr(char const *s, unsigned int star, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			**ft_split(char const *str, char c);
char			*ft_itoa(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int nb, int fd);
char			*ft_strtrim(char const *s1, char const *set);
typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **alst, t_list *new);
int				ft_lstsize(t_list *list);
t_list			*ft_lstlast(t_list *list);
void			ft_lstadd_back(t_list **list, t_list *new);
void			ft_lstdelone(t_list *list, void (*del)(void*));
void			ft_lstiter(t_list *list, void (*f)(void*));
t_list			*ft_lstmap(t_list *list, void *(*f)(void*), void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
#endif

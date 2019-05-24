/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:27:28 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/05/24 11:02:03 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

typedef	struct	s_list
{
	void				*content;
	size_t				content_size;
	struct		s_list	*next;
}										t_list;

int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, void const *src, size_t n);
void	*ft_memset(void *s, int c, size_t len);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *s1, char *s2);
char	*ft_strdup(char *src);
size_t	ft_strlcat(char *dest, char const *src, size_t n);
int		ft_strlen(char *str);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
char	*ft_strrchr(char const *str, int c);
char	*ft_strstr(const char *s1, const char *s2);
void	ft_swap(int *a, int *b);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:24:11 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/06 15:40:31 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s,int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n,int fd);
void	ft_bzero(void *s, size_t n);
int	ft_strcmp(const char *s1, const char *s2);
int ft_atoi(const char *nptr);

size_t	ft_strlen(const char *s);
#endif

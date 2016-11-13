/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:01:52 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/13 10:40:25 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

void	ft_putstr_fd(char const *s,int fd)
{
	if ((s) && (fd >= 0))
		write(fd, s, ft_strlen(s));
}

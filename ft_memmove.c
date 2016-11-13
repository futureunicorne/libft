/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:19:28 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/11 16:30:02 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *tmp;

	tmp = ft_strnew(n);
	if (tmp)
	{
	 	src = ft_memcpy(tmp, src, n);
		dest = ft_memcpy(dest, tmp, n);
	}
	return (dest);
}
/*
int	main(void)
{
	char dest[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char *src = "thi\xffs i\xfas \0a g\xde\xadood \0nyan\0cat\0 !\r\n";
	printf("%s\n", ft_memmove(dest, src, 26));
	printf("%s\n", memmove(dest, src, 33));
	return (0);
}
*/

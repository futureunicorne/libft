/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 08:38:28 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/13 10:19:30 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *dest1;
	unsigned char *src1;
	unsigned char chr;
	size_t i;

	i = 0;
	if (n == 0)
		return ((unsigned char*)dest);
	dest1 = (unsigned char*)dest;
	src1 = (unsigned char*)src;
	chr = (unsigned char)c;
	while (i < n)
	{
		if (src1[i] == chr)
		{
			dest1[i] = src1[i];
			return (dest1 + i + 1);
		}
		dest1[i] = src1[i];
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *src = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char dest[80];
	printf("%p\n", ft_memccpy(dest, src, 'F', strlen(src)));
	printf("%p\n", memccpy(dest, src, 'F', strlen(src)));
	return (0);
}
*/

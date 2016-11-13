/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 18:25:42 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/11 19:33:46 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *s3;
	const char *s4;

	s3 = (const char*)s1;
	s4 = (const char*)s2;
	return (ft_strncmp(s3, s4, n));
}
/*
int	main(void)
{
	const char *s1;
	const char *s2;

	s1 = "\xff\0\0\xaa\0\xde\xffMACOSX\xff";
	s2 = "\xff\0\0\xaa\0\xde\x00MBS";
	size_t n = 9;

	printf("%d\n", ft_memcmp(s1, s2, n));
	printf("%d\n", memcmp(s1, s2, n));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 08:50:38 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/11 18:11:28 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	const char *s1;

	s1 = (const char*)s;
	if (n == 0)
		return (NULL);
	return (ft_strnchr(s1, c, n));
}
/*
	int	main(void)
	{

		printf("%s\n", ft_memchr("/|\x12\xff\x09\x42\042\42|\\", '\x42', 8));
		printf("%s\n", memchr("/|\x12\xff\x09\x42\042\42|\\", '\x42', 8));
		return (0);
	}


	if (c == '\0')
		return(s);
	while (i < n)
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
	*/

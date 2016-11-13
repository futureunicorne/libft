/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 12:22:56 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/13 11:03:25 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (c == s[i])
			return ((char*)s + i);
		if (c == '\0')
			return ((char*)s + i);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strrchr("bonbons", '\0'));
	printf("%s\n", strrchr("bonbons", '\0'));
	return (0);
}
*/

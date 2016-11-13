/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:21:54 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/13 10:20:58 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//include <string.h>

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen((char*)dest);
	while (src[i] != '\0')
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	return (dest);
}
/*
int main(void)
{
	char tab[10] =  "elhadi";
	char tab1[17] = "hamza";
	printf("%s\n", ft_strcat(tab1, tab));
	printf("%s\n", strcat(tab1, tab));
	return (0);
}
*/

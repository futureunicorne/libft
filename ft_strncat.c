/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:44:14 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/13 10:21:45 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	int len;

	i = 0;
	len = strlen((char *)dest);
	while ((i < n) && src[i])
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[i +len] = '\0';
	return (dest);
}
/*
int main(void)
{
	char tab[10] =  "elhadi";
	char tab1[17] = "hamza";
	printf("%s\n", ft_strncat(tab1, tab, 3));
	printf("%s\n", strncat(tab1, tab, 3));
	return (0);
}
*/

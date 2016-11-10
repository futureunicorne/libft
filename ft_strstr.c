/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:33:47 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/09 13:33:47 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(s2) == 0)
		return ((char*)s1);
	if (ft_strlen(s1) == 0)
		return (NULL);
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j]) //marche pq j remis a 0
		{
			j++;
			if (s2[j] == '\0')
				return ((char*)s1 + i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%s\n", ft_strstr("oh no not the empty string !", ""));
	printf("%s\n", strstr("oh no not the empty string !", ""));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 19:43:10 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/13 10:54:05 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(s2) == 0)
		return ((char*)s1);
	if (ft_strlen(s1) == 0)
		return (NULL);
	len = len - 1;
	while (s1[i] && (i <= len))
	{
		j = 0;
		while (s1[i + j] == s2[j])
		{
			if ((i + j == len + 1) && (j + 1 != '\0'))
				return (NULL);
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
	printf("%s\n", ft_strnstr("Aabcdefghiabcdefghij", "j",20));
	return (0);
}
*/

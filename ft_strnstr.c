/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 19:43:10 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/10 07:56:40 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	char *dup;

	i = 0;
	dup = ft_strndup(s1, len);
	if (ft_strlen(s2) == 0)
		return ((char*)dup);
	if (ft_strlen(dup) == 0)
		return (NULL);
	while (dup[i])
	{
		j = 0;
		while (dup[i + j] == s2[j])
		{
			j++;
			if (s2[j] == '\0')
				return ((char*)dup + i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%s\n", ft_strnstr("bravissimo", "ssi", 8));

	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 10:24:25 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/13 10:27:56 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnchr(const char *s, int c, size_t n)
{
	size_t i;

	i = 0;
	if (c == '\0')
		return ("\0");
	while (s[i] && (i < n))
	{
		if (s[i] == c)
			return ((char*)s + i);
		i++;
	}
	return (NULL);
}

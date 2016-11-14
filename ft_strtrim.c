/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 12:14:00 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/13 17:22:17 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int i;
	size_t len;
	size_t j;

	i = 0;
	j = ft_strlen(s) - 1;
	if (s)
	{
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		{
			if (s[i + 1] == '\0')
					return ((char*)s + i + 1);
			i++;
		}
		while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
			j--;
	}
	len = j - i;
	return (ft_strsub(s, i, len + 1));
}
/*
int	main(void)
{
	printf("%s\n", ft_strtrim("   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n"));
	return (0);
}
*/

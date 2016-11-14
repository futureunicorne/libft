/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 18:24:30 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/13 17:22:21 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)

{
	int i;
	int j;
	char *s3;

	i = 0;
	j = 0;
	if (!s1 || !s2 )
		return (NULL);
	if ((s3 = (char*)malloc(sizeof(s1) * ft_strlen(s1) + ft_strlen(s2) + 1)) == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';
	return (s3);
}
/*
int	main(void)
{
	printf("%s\n", ft_strjoin("hamza", "elhadi"));
	return (0);
}
*/

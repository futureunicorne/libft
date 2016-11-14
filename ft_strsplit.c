/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:21:19 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/14 00:48:27 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int count;
	int auth;

	count = 0;
	auth = 0;
	while (*s)
	{
		if (auth == 1 && *s == c) // flags pour autoriser le compte
			auth = 0;
		if (auth == 0 && *s != c)
		{
			auth = 1;
			count++;
		}
		s++;
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	int auth;
	int i;
	int k;
	int mark;
	char **s1;

	i = 0;
	k = 0;
	auth = 0;
	if ((s1 = (char**)malloc(sizeof(s1) * ft_count_words(s, c) + 1)) == NULL)
		return (NULL);
	while (s[i])
	{
		if (auth == 1 && s[i] == c)
		{
			auth = 0;
			s1[k] = ft_strsub(s, mark, (i - mark));
			printf("%s\n",s1[k]);
			k++;
		}
		if (auth == 0 && s[i] != c)
		{
			auth = 1;
			mark = i;
		}
		i++;
	}
	return (s1);
}

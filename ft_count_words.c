/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:07:41 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/14 00:42:15 by hel-hadi         ###   ########.fr       */
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
/*
int	main(void)
{
	printf("%d\n", ft_count_words("je*hamza****elhadi*27ans*", '*'));
	return (0);
}
*/

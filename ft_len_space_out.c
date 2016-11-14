/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_space_out.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 13:47:41 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/13 17:22:33 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_space_out(char const *s)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		{
			count++;
		}
		i++;
	}
	return (i - count);
}

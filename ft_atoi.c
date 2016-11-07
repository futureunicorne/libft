/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:00:51 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/06 10:27:36 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	int i;
	int sign;
	int number;

	i = 0;
	sign = 1;
	number = 0;
	while ((nptr[i] >= 0 && nptr[i] <= 32) && (nptr[i] != '\0'))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while ((nptr[i] >= '0' && nptr[i] <= '9') && (nptr[i] != '\0'))
	{
		number = nptr[i] - '0' + number * 10;
		i++;
	}
	return (number * sign);
}

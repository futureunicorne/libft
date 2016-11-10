/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 15:06:55 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/09 15:06:55 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || ((c >= 97 && c <= 122)))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isalnum(0));
	printf("%d\n", isalnum(0));
	return (0);
}
*/

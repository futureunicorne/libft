/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:41:54 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/09 17:53:04 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_toupper(int c)
{
	if(c >= 97 && c <= 122)
		return(c - 32);
	return(c);
}/*
int main(void)
{
	printf("%d\n", ft_toupper(98));
	return (0);
}
*/

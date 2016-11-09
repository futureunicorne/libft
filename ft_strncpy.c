/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 19:16:20 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/09 10:36:59 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
  while(src[i] != '\0' && i < n)
  {
    dest[i] = src[i];
    i++;
  }
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);
}

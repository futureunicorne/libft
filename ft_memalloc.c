/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 12:01:07 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/12 18:40:04 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	return (ft_strnew(size));
}
/*
int	main(void)
{
	printf("%s\n", ft_memalloc((9223372036854775807L *2UL+1UL)));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 15:20:54 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/13 10:22:33 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*	ft_strnew(size_t size)
{
	size_t i;
	char *tab;

	i = 0;
	//if (size > (4294967295)) pour gerer le depassement du sze_t
		//return (NULL);
	if((tab = (char*)malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	while (i < size)
	{
		if (i + 1 == size)
		{
			tab[i] = '\0';
			tab[i + 1] = '\0';
			return (tab);
		}
		tab[i] = '\0';
		i++;
	}
	free (tab);
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strnew((429496730)));
	return (0);
}
*/

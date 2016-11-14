/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 10:19:21 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/14 11:30:56 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_num(int n)
{
	int count;

	count = 0;
	if (n >= 0 && n <= 9)
		return (1);

	if (n > 9)
	{
		ft_count_num(n / 10);
		count++;
	}
	return (count);
}
/*
char	*ft_itoa(int n)
{
	int i;
	int sign;
	int num;
	char *s1;

	i = 0;
	sign = 1;
	num = 0;
	if ((s1 = (char*)malloc(sizeof(s1) * ft) == NULL)) //comment ft strlen int
		return (NULL);
	if (n < 0)
		s1[i] = '-';
	if (n >= 0 || n <= 9 )// comment mettre un accent ?
		n = n + 48;
	while (s1 && n > 9)
	{
		num = n / 10;
		num = n % 10;
		s1[i] = num;
		i++;
	}
	return (s1);
}
*/
int	main(void)
{
	printf("%d\n", ft_count_num(1243));
	return (0);
}

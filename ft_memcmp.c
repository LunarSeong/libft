/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:37:20 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/08 20:37:54 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	str1[] = "Hello, world!";
	const char	str2[] = "Hello, world!";
	int			result;

	result = ft_memcmp(str1, str2, sizeof(str1));
	if (result == 0)
	{
		printf("The strings are equal.\n");
	}
	else if (result < 0)
	{
		printf("The first string is less than the second string.\n");
	}
	else
	{
		printf("The first string is greater than the second string.\n");
	}
	return (0);
}
*/

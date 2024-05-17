/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:26:02 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/08 18:29:28 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
	{
		*p++ = (unsigned char)c;
	}
	return (s);
}
/*
int	main(void)
{
	char	str[] = "Hello, world!";

	printf("Before memset: %s\n", str);
	ft_memset(str, '*', 5);
	printf("After memset: %s\n", str);
	return (0);
}
*/

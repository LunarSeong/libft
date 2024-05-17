/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:34:34 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/08 19:37:08 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = (const unsigned char *)s;
	while (n-- > 0)
	{
		if (*p == (unsigned char)c)
		{
			return ((void *)p);
		}
		p++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str[] = "Hello, world!";
	char		*result;

	result = ft_memchr(str, 'w', sizeof(str));
	if (result != NULL)
	{
		printf("Character 'w' found at position: %ld\n", result - str);
	}
	else
	{
		printf("Character 'w' not found\n");
	}
	return (0);
}
*/

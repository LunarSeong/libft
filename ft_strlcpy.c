/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:40:50 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/08 18:50:27 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		sl;
	size_t		nc;
	const char	*sp;

	sp = src;
	sl = 0;
	while (*sp != '\0' && ++sl)
		sp++;
	if (size != 0)
	{
		if (size > sl + 1)
		{
			nc = sl;
		}
		else
		{
			nc = size - 1;
		}
		while (nc-- > 0)
		{
			*dest++ = *src++;
		}
		*dest = '\0';
	}
	return (sl);
}
/*
int	main(void)
{
	char		dest[20];
	const char	*src = "Hello, world!";
	size_t		c;

	c = ft_strlcpy(dest, src, 20);
	printf("Copied: %zu\n", c);
	printf("Destination: %s\n", dest);
	return (0);
}
*/

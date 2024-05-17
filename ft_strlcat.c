/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:05:25 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/08 19:16:44 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*p;

	p = dest;
	while (*p)
	{
		p++;
	}
	while (*src && n-- > 0)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dl;
	size_t	sl;

	sl = ft_strlen(src);
	dl = ft_strlen(dest);
	if (size <= dl)
		return (size + sl);
	ft_strncat(dest + dl, src, size - dl - 1);
	return (dl + sl);
}
/*
int	main(void)
{
	char		dest[20] = "Hello, ";
	const char	*src = "world!";
	size_t		tl;

	tl = ft_strlcat(dest, src, sizeof(dest));
	printf("Concatenated string: %s\n", dest);
	printf("Total length: %zu\n", tl);
	return (0);
}
*/

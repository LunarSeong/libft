/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:35:19 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/16 18:46:04 by lunarseong       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (s < d)
	{
		s += n;
		d += n;
		while (n-- > 0)
		{
			*(--d) = *(--s);
		}
	}
	else
	{
		while (n-- > 0)
		{
			*d++ = *s++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	source[] = "Hello, world!";
	char	destination[20];

	printf("Before memmove: %s\n", destination);
	ft_memmove(destination, source, 14);
	printf("After memmove: %s\n", destination);
	return (0);
}
*/

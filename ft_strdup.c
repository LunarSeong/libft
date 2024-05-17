/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:00:04 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/19 14:47:21 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	char	*p;

	p = dest;
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ns;

	len = ft_strlen(s) + 1;
	ns = (char *)malloc(len * sizeof(char));
	if (ns != NULL)
		ft_strcpy(ns, s);
	return (ns);
}
/*
int	main(void)
{
	const char	*ost;
	char		*dupst;

	ost = "Hello, world!";
	dupst = ft_strdup(ost);
	if (dupst != NULL)
	{
		printf("Original string: %s\n", ost);
		printf("Duplicate string: %s\n", dupst);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:06:52 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/08 18:14:24 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	const char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		ptr++;
	}
	return (ptr - str);
}
/*
int	main(void)
{
	char	str[] = "Hello, world!";
	size_t	length;

	length = ft_strlen(str);
	printf("Length of '%s' is %zu\n", str, length);
	return (0);
}
*/

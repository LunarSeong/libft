/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:57:24 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/08 20:32:37 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	ts;
	void	*ptr;

	ts = nmemb * size;
	ptr = (void *)malloc(ts);
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, ts);
	}
	return (ptr);
}
/*
int	main(void)
{
	int		*arr;
	size_t	nmemb;
	size_t	size;

	nmemb = 5;
	size = sizeof(int);
	arr = ft_calloc(nmemb, size);
	if (arr != NULL)
	{
		printf("Memory allocation successful.\n");
		printf("Contents of allocated memory (before freeing):\n");
		printf("arr[0] = %d\n", arr[0]);
		printf("arr[1] = %d\n", arr[1]);
		printf("arr[2] = %d\n", arr[2]);
		printf("arr[3] = %d\n", arr[3]);
		printf("arr[4] = %d\n", arr[4]);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
*/

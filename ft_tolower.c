/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:20:43 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/08 19:22:33 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + ('a' - 'A'));
	}
	else
	{
		return (c);
	}
}
/*
int	main(void)
{
	char	ch;

	ch = 'A';
	printf("Original character: %c\n", ch);
	printf("Lowercase character: %c\n", ft_tolower(ch));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:17:05 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/08 19:20:31 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - ('a' - 'A'));
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

	ch = 'a';
	printf("Original character: %c\n", ch);
	printf("Uppercase character: %c\n", ft_toupper(ch));
	return (0);
}
*/

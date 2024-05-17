/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:02:56 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/08 18:05:02 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	char	ch;

	ch = 'a';
	if (ft_isascii(ch))
		printf("%c is an ASCII character.\n", ch);
	else
		printf("%c is not an ASCII character.\n", ch);
	return (0);
}
*/

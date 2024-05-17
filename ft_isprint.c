/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:05:51 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/08 18:24:54 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int	main(void)
{
	char	ch;

	ch = 'A';
	if (ft_isprint(ch))
		printf("%c is a printable character.\n", ch);
	else
		printf("%c is not a printable character.\n", ch);
	return (0);
}
*/

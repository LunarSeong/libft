/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:59:46 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/08 18:04:34 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}
/*
int	main(void)
{
	char	ch;

	ch = '7';
	if (ft_isalnum(ch))
		printf("%c is an alphanumeric character.\n", ch);
	else
		printf("%c is not an alphanumeric character.\n", ch);
	return (0);
}
*/

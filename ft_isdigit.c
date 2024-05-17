/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:55:00 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/08 17:58:35 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
int	main(void)
{
	char	ch;

	ch = '5';
	if (ft_isdigit(ch))
		printf("%c is a digit.\n", ch);
	else
		printf("%c is not a digit.\n", ch);
	return (0);
}
*/

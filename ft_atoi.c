/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:51:32 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/25 19:34:58 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* SYNOPSIS
 * 	#include <stdib.h>
 *
 * 	int atoi(const char *nptr);
 *
 * DESCRIPTION
 *	The atoi() function converts the intial portion of a string pointed to by
 *	nptr to int. The behaviour is the same as
 *
 *		strtol(nptr, NULL, 10);
 *
 *	except that atoi() does not detect errors.
 *
 * RETURN VALUE
 *	Returns the converted value or 0 on error.
 *
 * EXPLANATION
 * 	
 */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

/* int	main(void)
{
	const char	*str;
	int			num;

	str = "12345";
	num = ft_atoi(str);
	printf("String: %s, Integer: %d\n", str, num);
	return (0);
} */

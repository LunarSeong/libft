/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lunarseong <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:58:38 by lunarseong        #+#    #+#             */
/*   Updated: 2024/03/18 10:02:23 by lunarseong       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getdigic(long long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static char	*extractdigi(long long num, int digic, int isneg)
{
	char	*result;
	int		i;

	result = (char *)malloc((digic + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[digic] = '\0';
	if (isneg)
		result[0] = '-';
	i = digic - 1;
	while (i >= isneg)
	{
		result[i] = '0' + (num % 10);
		num /= 10;
		i--;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	long long	num;
	int			isneg;
	int			digic;

	num = n;
	isneg = 0;
	if (num < 0)
	{
		isneg = 1;
		num = -num;
	}
	digic = getdigic(num);
	if (isneg)
		digic++;
	return (extractdigi(num, digic, isneg));
}

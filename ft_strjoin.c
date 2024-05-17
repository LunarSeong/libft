/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 21:47:46 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/08 21:53:37 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	tolen;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	tolen = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = (char *)malloc(tolen);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, tolen);
	ft_strlcat(result, s2, tolen);
	return (result);
}
/*
int	main(void)
{
	const char	*s1;
	const char	*s2;
	char		*result;

	s1 = "Hello, ";
	s2 = "world!";
	result = ft_strjoin(s1, s2);
	if (result != NULL)
	{
		printf("Joined string: %s\n", result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:04:08 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/09 04:54:00 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*start;

	start = dest;
	while (n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n--)
	{
		*dest = '\0';
		dest++;
	}
	return (start);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	const char	*start;
	const char	*end;
	size_t		len;
	char		*ts;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = s1;
	while (*start && ft_strchr(set, *start))
	{
		start++;
	}
	end = s1 + ft_strlen(s1);
	while (end > start && ft_strchr(set, *(end - 1)))
	{
		end--;
	}
	len = end - start;
	ts = (char *)malloc((len + 1) * sizeof(char));
	if (ts == NULL)
		return (NULL);
	ft_strncpy(ts, start, len);
	ts[len] = '\0';
	return (ts);
}
/*
int	main(void)
{
	const char	*os;
	const char	*set;
	char		*ts;

	os = "	Hello, world!	";
	set = " \t\n\v\f\r";
	ts = ft_strtrim (os, set);
	if (ts != NULL)
	{
		printf("Original string: '%s'\n", os);
		printf("Trimmed string: '%s'\n", ts);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
*/

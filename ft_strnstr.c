/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:44:58 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/21 10:47:45 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nelen;

	if (!*needle)
		return ((char *)haystack);
	nelen = ft_strlen(needle);
	while (*haystack && len >= nelen)
	{
		if (ft_strncmp(haystack, needle, nelen) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

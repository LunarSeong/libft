/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:17:26 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/21 19:22:31 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**memalloc(char const *s, char c, size_t *x)
{
	size_t	i;
	size_t	j;
	char	**out;

	i = 0;
	j = 0;
	while (s && s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			j++;
		while (s[i] && s[i] != c)
			i++;
	}
	out = (char **)malloc((j + 1) * sizeof(char *));
	if (!out)
		return (0);
	out[j] = 0;
	*x = -1;
	return (out);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	size_t	i;
	size_t	j;

	out = memalloc(s, c, &j);
	while (out && s && *s)
	{
		if (*s++ != c)
		{
			s--;
			i = 0;
			while (s[i] && s[i] != c)
				i++;
			out[++j] = ft_substr(s, 0, i);
			if (!out[j])
			{
				while (j > 0)
					free(out[--j]);
				free(out);
				return (0);
			}
			s += i;
		}
	}
	return (out);
}

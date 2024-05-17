/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:30:22 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/15 14:24:03 by lunarseong       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- > 0)
	{
		if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
		{
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
/*
   int	main(void)
   {
   const char	*str1;
   const char	*str2;
   int			result;

   str1 = "Hello";
   str2 = "HelLo";
   result = ft_strncmp(str1, str2, 3);
   if (result == 0)
   {
   printf("1st 3 characters of both strings are =.\n");
   }
   else if (result < 0)
   {
   printf("1st 3 characters of the 1st string are < the 2nd string.\n");
   }
   else
   {
   printf("1st 3 characters of the 1st string are > the 2nd string.\n");
   }
   return (0);
   }
   */

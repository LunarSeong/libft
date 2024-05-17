/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpangadi <tpangadi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:51:52 by tpangadi          #+#    #+#             */
/*   Updated: 2024/03/30 20:19:22 by tpangadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* SYNOPSIS
 * 	#include <ctype.h>
 *
 * 	int	isalpha(int c);
 *
 * DESCRIPTION
 * 	Checks  for  an  alphabetic  character;  in  the standard "C" locale, it
 * 	is equivalent to (isupper(c) || islower(c)). In some locales, there may
 * 	be additional characters for which isalpha() is true—letters which are
 * 	neither uppercase nor lowercase.
 *
 * EXPLANATION
 * 	In my program, you'll notice that I've only used the `return` statement 
 * 	without `if` statements to check conditions and figure out the return value.
 * 	This is because C programming automatically treats true conditions as 1 and 
 * 	false conditions as 0.
 */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

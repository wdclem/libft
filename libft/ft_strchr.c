/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:13:03 by ccariou           #+#    #+#             */
/*   Updated: 2021/11/23 20:08:20 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function search for the first occurence of the char c, in the string str.
 */

char	*ft_strchr(const char *str, int c)
{
	while ((*str != '\0') && (*str != c))
		str ++;
	if (*str == c)
		return ((char *) str);
	else
		return (0);
}

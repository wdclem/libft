/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:54:35 by ccariou           #+#    #+#             */
/*   Updated: 2021/11/23 20:06:21 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function copies unsigned char c to the first n char of the string
 * pointd to by argument str.
*/

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	index;

	index = 0;
	if (c != 0)
	{
		while (index < n)
		{
			((unsigned char *) str)[index] = (unsigned char) c;
			index ++;
		}
	}
	return (str);
}

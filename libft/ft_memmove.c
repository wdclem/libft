/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:08:57 by ccariou           #+#    #+#             */
/*   Updated: 2021/11/23 20:06:04 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function copy bytes from a buffer to the other handling overlapping correctly
 */

void	*ft_memmove(void *dst, const void *src, size_t length)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (dst > src)
	{
		while (length)
		{
			length --;
			d[length] = s[length];
		}
	}
	else if (src > dst)
	{
		while (length)
		{
			length --;
			*d = *s;
			d ++;
			s ++;
		}
	}
	return (dst);
}

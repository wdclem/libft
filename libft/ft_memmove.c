/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:08:57 by ccariou           #+#    #+#             */
/*   Updated: 2021/12/05 20:53:22 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function copy bytes from a buffer to the other handling overlapping correctly
 */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
	{
		while (len --)
			d[len] = s[len];
	}
	else
	{
		while (len --)
		{
			*d = *s;
			d ++;
			s ++;
		}
	}
	return (dst);
}

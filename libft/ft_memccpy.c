/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:41:30 by ccariou           #+#    #+#             */
/*   Updated: 2021/11/18 12:50:00 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function copies bytes from memory area source into destination
 * stopping after the first occurence of c has been copied
 * or after n bytes have been copied, whichever comes first.
*/

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			index;
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *) s1;
	src = (unsigned char *) s2;
	index = 0;
	while (index < n)
	{
		dst[index] = src[index];
		if (src[index] == (unsigned char) c)
			return ((void *)(dst + index + 1));
		index ++;
	}
	return (NULL);
}

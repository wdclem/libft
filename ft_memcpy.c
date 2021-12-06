/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:51:28 by ccariou           #+#    #+#             */
/*   Updated: 2021/12/05 20:17:10 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Fucntion copies n char form memory area source to memory area dest
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*dest;
	unsigned char	*s;

	index = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	dest = (unsigned char *) dst;
	s = (unsigned char *) src;
	while (index < n)
	{
		dest[index] = s[index];
		index ++;
	}
	return (dest);
}

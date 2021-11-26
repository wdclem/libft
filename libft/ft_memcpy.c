/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:51:28 by ccariou           #+#    #+#             */
/*   Updated: 2021/11/18 12:13:55 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Fucntion copies n char form memory area source to memory area dest
*/

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*dest;
	unsigned char	*src;

	index = 0;
	if (s1 == NULL && s2 == NULL)
		return (s1);
	dest = (unsigned char *) s1;
	src = (unsigned char *) s2;
	while (index < n)
	{
		dest[index] = src[index];
		index ++;
	}
	return (dest);
}

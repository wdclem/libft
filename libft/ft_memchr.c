/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:22:36 by ccariou           #+#    #+#             */
/*   Updated: 2021/11/23 20:10:54 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function find the first occurence of a character in a buffer
 */

void	*ft_memchr(void *buf, int ch, size_t length)
{
	size_t			index;
	unsigned char	*src;

	index = 0;
	src = (unsigned char *) buf;
	while (index < length)
	{
		if (src[index] == (unsigned char) ch)
			return (src + index);
		index ++;
	}
	return (NULL);
}

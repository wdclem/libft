/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:20:41 by ccariou           #+#    #+#             */
/*   Updated: 2021/11/23 20:16:53 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function put a null terminated string source at the end of dest.
 * done at the strlen(dest) - 1 bytes, \0 terminating.
 * return length dest + src.
 */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ld;
	size_t	ls;

	j = 0;
	ld = ft_strlen(dest);
	ls = ft_strlen(src);
	i = ld;
	if (size == 0)
		return (ls + size);
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i ++;
		j ++;
	}
	if (src[j] == '\0')
		dest[i] = '\0';
	if (size < ld)
		return (ls + size);
	else
		return (ld + ls);
}

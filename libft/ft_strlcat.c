/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:20:41 by ccariou           #+#    #+#             */
/*   Updated: 2021/11/27 13:01:58 by ccariou          ###   ########.fr       */
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
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	j = dlen;
	i = 0;
	if (size < dlen)
		return (slen + size);
	while ((size > j + 1) && src[i])
	{
		dest[j] = src[i];
		i ++;
		j ++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

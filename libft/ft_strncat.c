/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:02:16 by ccariou           #+#    #+#             */
/*   Updated: 2021/11/23 20:17:45 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function put the pointer to string source after dest up to n char long.
 */

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;
	char	*tmp;

	tmp = dest;
	i = 0;
	len = ft_strlen(dest);
	while (i < n && src[i] != '\0')
	{
		dest[i + len] = src[i];
		i ++;
	}
	dest[i + len] = '\0';
	return (tmp);
}

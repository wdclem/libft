/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:41:20 by ccariou           #+#    #+#             */
/*   Updated: 2021/11/23 20:08:05 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function put the string source after string dest.
*/

char	*ft_strcat(char *dest, const char *src)
{
	int		idest;
	int		isrc;

	idest = 0;
	isrc = 0;
	while (dest[idest])
		idest ++;
	while (src[isrc])
	{
		dest[idest] = src[isrc];
		idest ++;
		isrc ++;
	}
	dest[idest] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:02:02 by ccariou           #+#    #+#             */
/*   Updated: 2021/11/17 13:33:55 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	while (haystack [i] != '\0')
	{
		j = 0;
		n = i;
		while (haystack[n] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *) &haystack[i]);
			}
			n ++;
			j ++;
		}
		i ++;
	}
	return (0);
}

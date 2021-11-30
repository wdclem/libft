/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:29:38 by ccariou           #+#    #+#             */
/*   Updated: 2021/11/30 13:34:43 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function search for the last occurence of c in str
 */

char	*ft_strrchr(const char *str, int c)
{
	int	index;

	index = ft_strlen(str);
	while (index >= 0)
	{
		if (str[index] == c)
			return ((char *) str + index);
		index --;
	}
	return (0);
}

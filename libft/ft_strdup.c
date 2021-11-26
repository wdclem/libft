/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:27:53 by ccariou           #+#    #+#             */
/*   Updated: 2021/11/23 20:31:40 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function returns a pointer to a new string duplicate from string.
 * Malloc is used to get memory for the duplicata.
*/

char	*ft_strdup(const char *string)
{
	int		len;
	int		i;
	char	*dest;

	i = 0;
	len = 0;
	while (string[len])
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (string[i] != '\0')
	{
		dest[i] = string[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

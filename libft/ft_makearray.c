/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makearray.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:55:16 by ccariou           #+#    #+#             */
/*   Updated: 2021/11/26 19:27:56 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_makearray(int len)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		while (i < len)
		{
			free(&str[i]);
			i ++;
		}
		free(str);
		return (NULL);
	}
	return (str);
}

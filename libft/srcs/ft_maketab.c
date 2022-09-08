/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maketab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:20:12 by ccariou           #+#    #+#             */
/*   Updated: 2021/11/26 19:29:07 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_maketab(int len)
{
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * (len + 1));
	if (tab == NULL)
	{
		return (NULL);
	}
	return (tab);
}

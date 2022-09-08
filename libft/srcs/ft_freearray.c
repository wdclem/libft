/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freearray.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:38:19 by ccariou           #+#    #+#             */
/*   Updated: 2021/12/22 12:41:32 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Function to free array/2d array
 */

void	ft_freearray(char **array, int i)
{
	while (i--)
		free(array[i]);
	ft_strdel(array);
}

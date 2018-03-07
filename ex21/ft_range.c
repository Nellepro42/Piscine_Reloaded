/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neprocur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:27:34 by neprocur          #+#    #+#             */
/*   Updated: 2016/11/23 15:59:06 by neprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int				*ft_range(int min, int max)
{
	int			i;
	int			*result;

	i = 0;
	if (min >= max)
		return (NULL);
	result = (int *)malloc(sizeof(int) * (max - min) + 1);
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neprocur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:21:32 by neprocur          #+#    #+#             */
/*   Updated: 2016/11/12 05:17:06 by neprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_swap(int *a, int *b)
{
	int			swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

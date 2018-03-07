/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neprocur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:26:28 by neprocur          #+#    #+#             */
/*   Updated: 2016/11/23 15:51:46 by neprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_iterative_factorial(int nb)
{
	int			result;

	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 1 || nb > 12)
		return (0);
	result = 1;
	while (nb > 1)
		result = result * nb--;
	return (result);
}

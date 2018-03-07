/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neprocur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:51:52 by neprocur          #+#    #+#             */
/*   Updated: 2016/11/23 15:54:25 by neprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	return (ft_recursive_factorial(nb - 1) * nb);
}

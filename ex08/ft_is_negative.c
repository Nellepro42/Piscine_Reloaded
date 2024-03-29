/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neprocur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:15:02 by neprocur          #+#    #+#             */
/*   Updated: 2016/11/23 18:08:43 by neprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);

void			ft_is_negative(int n)
{
	if (n > -1)
		ft_putchar('P');
	else
		ft_putchar('N');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neprocur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:01:55 by neprocur          #+#    #+#             */
/*   Updated: 2016/11/25 17:19:57 by neprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);

void			ft_print_params(char *str)
{
	int			i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int				main(int ac, char **av)
{
	int			i;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			ft_print_params(av[i++]);
			ft_putchar('\n');
		}
	}
	return (0);
}

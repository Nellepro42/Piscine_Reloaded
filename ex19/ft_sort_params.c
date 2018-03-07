/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neprocur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:01:45 by neprocur          #+#    #+#             */
/*   Updated: 2016/11/23 22:02:59 by neprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void			ft_putchar(char c);

int				ft_strcmp(char const *s1, char const *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (0);
	if (*s1 == *s2)
		return (ft_strcmp(s1 + 1, s2 + 1));
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void			ft_sort_params(char ***av)
{
	int			is_sorted;
	char		**tab;
	char		*tmp;
	int			i;

	is_sorted = 0;
	while (is_sorted == 0)
	{
		is_sorted = 1;
		tab = *av;
		i = 0;
		while (tab[i] != 0 && tab[i + 1] != 0)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				is_sorted = 0;
			}
			++i;
		}
	}
}

void			ft_print_params(char **tab)
{
	int			i;
	int			j;

	i = 0;
	while (tab[i] != 0)
	{
		j = 0;
		while (tab[i][j] != 0)
			ft_putchar(tab[i][j++]);
		ft_putchar('\n');
		++i;
	}
}

int				main(int ac, char **av)
{
	if (ac > 1)
	{
		++av;
		ft_sort_params(&av);
		ft_print_params(av);
	}
	return (0);
}

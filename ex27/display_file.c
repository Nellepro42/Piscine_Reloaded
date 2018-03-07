/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neprocur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 03:00:20 by neprocur          #+#    #+#             */
/*   Updated: 2016/11/12 04:10:30 by neprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int			ft_putstr_fd(int fd, char const *s)
{
	while (*s != 0)
		write(fd, s++, 1);
	return (0);
}

int			ft_display_file(int fd)
{
	char	buf[0x1000];
	int		r;

	while ((r = read(fd, buf, 0x1000)) > 0)
	{
		buf[r] = 0;
		ft_putstr_fd(1, buf);
	}
	return (r);
}

int			main(int argc, char **argv)
{
	int		fd;

	++argv;
	if (argc == 1)
		return (ft_putstr_fd(2, "File name missing.\n"));
	if (argc != 2)
		return (ft_putstr_fd(2, "Too many arguments.\n"));
	if ((fd = open(*argv, O_RDONLY)) == -1)
		return (ft_putstr_fd(2, "Error opening file.\n"));
	if (ft_display_file(fd) == -1)
		return (ft_putstr_fd(2, "Error reading file.\n"));
	if (close(fd) == -1)
		return (ft_putstr_fd(2, "Error closing file.\n"));
	return (0);
}

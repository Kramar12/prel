/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariabyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 13:11:30 by ariabyi           #+#    #+#             */
/*   Updated: 2017/10/26 17:51:11 by ariabyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define SIZE 4096

void	ft_putstr(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

int		main(int ac, char **av)
{
	int		fd;
	int		r;
	char	buf[SIZE + 1];

	if (ac == 1)
		ft_putstr("File name missing.\n");
	else if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		if ((fd = open(av[1], O_RDONLY)) == -1)
			return (1);
		while ((r = read(fd, buf, SIZE)) != 0)
		{
			buf[r] = '\0';
			ft_putstr(buf);
		}
		close(fd);
	}
	return (0);
}

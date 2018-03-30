/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariabyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 17:30:28 by ariabyi           #+#    #+#             */
/*   Updated: 2017/10/26 18:05:50 by ariabyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str++);
	}
}

int		main(int argc, char **argv)
{
	int a;

	a = 0;
	if (argc > 0)
	{
		while (++a < argc)
		{
			ft_putstr(argv[a]);
			ft_putchar('\n');
		}
	}
	return (0);
}

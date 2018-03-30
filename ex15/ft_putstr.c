/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariabyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 16:12:19 by ariabyi           #+#    #+#             */
/*   Updated: 2017/10/26 17:39:54 by ariabyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char b);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
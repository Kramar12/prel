/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariabyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 13:56:14 by ariabyi           #+#    #+#             */
/*   Updated: 2017/10/25 14:05:02 by ariabyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char b);

void	ft_is_negative(int n)
{
	n >= 0 ? ft_putchar('P') : ft_putchar('N');
}
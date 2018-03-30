/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariabyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 14:26:16 by ariabyi           #+#    #+#             */
/*   Updated: 2017/10/25 14:47:45 by ariabyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;
	int result;

	result = 1;
	a = 0;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (result);
	while (++a <= nb)
		result *= a;
	return (result);
}

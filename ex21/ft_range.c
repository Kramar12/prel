/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariabyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 11:38:07 by ariabyi           #+#    #+#             */
/*   Updated: 2017/10/26 18:33:38 by ariabyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *temp;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	temp = (int*)malloc(sizeof(*temp) * (max - min));
	if (temp == NULL)
		return (0);
	while (min < max)
	{
		temp[i] = min;
		min++;
		i++;
	}
	return (temp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariabyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 10:54:15 by ariabyi           #+#    #+#             */
/*   Updated: 2017/10/26 11:29:38 by ariabyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*temp;
	int		len;
	int		i;

	i = -1;
	len = 0;
	while (src[len])
		len++;
	temp = (char*)malloc(sizeof(char) * (len + 1));
	if (temp == NULL)
		return (0);
	while (++i < len)
		temp[i] = src[i];
	temp[len] = 0;
	return (temp);
}

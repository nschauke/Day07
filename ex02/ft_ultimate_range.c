/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:35:17 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/16 14:37:46 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int x;
	int *map;

	if(min >= max)
	{
		*range = (void *)0;
		return(0);
	}
	map = (int*)malloc(sizeof(*map) * (max - min));
	x = 0;
	while (min < max)
	{
		tab[i] = min;
		x++;
		min++;
	}
	*range = map;
	return(x);

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:23:49 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/16 14:30:02 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int *ft_range(int min, int max)

{
	int *value;
		int x;


		if(min >= max)
			return (NULL);

		value =(int*) malloc(sizeof(*value) *(value - min));

		x = 0;

		while(min < max)

		{ 
			tab[x] = min;
			x++;
			min++;

		}

		return (value);
}

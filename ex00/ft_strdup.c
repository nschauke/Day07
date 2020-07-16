/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:18:38 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/16 13:25:30 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

char *ft_strdup(char *src)

{
	int x;
	char *dup;


	x = 0;
	while (src[x])
		x++;

	if(!(dup = (char *)malloc(sizeof(char) * (x + 1))))

		return (NULL);

	x = -1;
	while (src[++x])
		dup[x] = src[x];
	dup[x] = '\0';
	return (dup);

}


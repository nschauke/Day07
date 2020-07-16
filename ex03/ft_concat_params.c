/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:43:24 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/16 14:46:30 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

char *ft_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while(dest[x] != '\0')
		x++;
	y = 0;
	while(src[y] != '\0')
	{
		dest[x + j] = src[y];
		y++;

	}
	dest[ x + y] = '\n';
	dest[ x + y + 1] = '\0';
	return(dest);
}

char *ft_concat_params(int argc, **argv)
{
	char *str;
	int x;
	int y;
	int count;

	count = 0;
	while(count < argc)
	{
		y = 0;
		while(argv[y])
		{
			count++;
			y++;
		}
	}
	str = (char*)malloc(sizeof(*str) * (count + 1));
	x = 0;
	while(x < argc - 1)
	{
		str = ft_strcat(str, argv[x + 1]);
		x++;
	}
	return(str);
}


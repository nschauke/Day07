/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:50:03 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/16 14:56:52 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*args;
	int		x;
	int		y;
	int		j;
	int		mem;

	mem = 0;
	x = 1;
	while (x < argc)
		mem += ft_strlen(argv[x++]) + 1;
	args = (char*)malloc(sizeof(char) * mem);
	x = 1;
	j = 0;
	while (i < argc)
	{
		y = 0;
		while (argv[x][y] != '\0')
			args[j++] = argv[x][y++];
		if (x == argc - 1)
			args[j++] = '\0';
		else
			args[y++] = '\n';
		x++;
	}
	return (args);
}


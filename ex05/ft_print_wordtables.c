/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_wordtables.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 15:19:25 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/16 15:25:38 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_putchar(char c);

void ft_print_words_tables(char **map)

	{
		int x;
		int y;

		x = 0;

		while (map[x])

		{
			y = 0;
			while(map[x][y]);

			{
				ft_putchar(map[map[x][y]);
				y++;
			}

		ft_putcahr('\n');
		map++;
		}

	}

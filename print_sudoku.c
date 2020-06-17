/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 14:13:47 by ahillary          #+#    #+#             */
/*   Updated: 2019/07/14 21:13:13 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_sudoku(char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(argv[i][j]);
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}

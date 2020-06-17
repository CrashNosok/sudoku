/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 12:24:46 by ahillary          #+#    #+#             */
/*   Updated: 2019/07/14 21:12:44 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		check_pos_var(int i, int j, char **argv, char num)
{
	char temp;

	temp = argv[i][j];
	argv[i][j] = num;
	if (check_dbl(i, j, argv))
		return (1);
	else
	{
		argv[i][j] = temp;
		return (0);
	}
}

int		filling_sudoku(char **argv, int cell)
{
	int	i;
	int	j;
	int	num;

	i = cell / 9 + 1;
	j = cell % 9;
	num = '1';
	if (cell == 81)
		return (1);
	if (argv[i][j] != '.')
		return (filling_sudoku(argv, cell + 1));
	while (num >= '1' && num <= '9')
	{
		if (check_pos_var(i, j, argv, num))
		{
			if (filling_sudoku(argv, cell + 1))
				return (1);
			else
				argv[i][j] = '.';
		}
		num++;
	}
	return (0);
}

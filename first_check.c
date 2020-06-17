/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsausage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 12:24:27 by bsausage          #+#    #+#             */
/*   Updated: 2019/07/14 16:02:08 by bsausage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check(int argc, char **argv)
{
	int i;
	int j;

	if (argc != 10)
		return (0);
	i = 1;
	while (i < 10)
	{
		j = 0;
		if (ft_strlen(argv[i]) != 9)
			return (0);
		while (j < 9)
		{
			if (!((argv[i][j] >= '1' && argv[i][j] <= '9') ||
						argv[i][j] == '.'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	first_check(int argc, char **argv)
{
	int i;
	int j;

	if (check(argc, argv) == 0)
		return (0);
	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (check_dbl(i, j, argv) == 0 && argv[i][j] != '.')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

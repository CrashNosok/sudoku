/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsausage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 14:26:16 by bsausage          #+#    #+#             */
/*   Updated: 2019/07/14 21:13:02 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		main(int argc, char **argv)
{
	if (first_check(argc, argv) == 0)
		print_error();
	else
	{
		filling_sudoku(argv, 0);
		print_sudoku(argv);
	}
	return (0);
}

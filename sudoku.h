/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsausage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 15:51:45 by bsausage          #+#    #+#             */
/*   Updated: 2019/07/14 16:00:15 by bsausage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

int		check_dbl(int i, int j, char **argv);
int		first_check(int argc, char **argv);
int		filling_sudoku(char **argv, int cell);
void	print_sudoku(char **argv);
void	print_error(void);

#endif

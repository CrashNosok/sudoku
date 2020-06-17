/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dbl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsausage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:19:36 by bsausage          #+#    #+#             */
/*   Updated: 2019/07/14 21:12:29 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_line(int i, int j, char **argv)
{
	int k;

	k = 0;
	while (k < 9)
	{
		if (argv[i][j] == argv[i][k] && k != j)
			return (0);
		k++;
	}
	return (1);
}

int	check_column(int i, int j, char **argv)
{
	int k;

	k = 1;
	while (k < 10)
	{
		if (argv[i][j] == argv[k][j] && k != i)
			return (0);
		k++;
	}
	return (1);
}

int	check_sqr(int i, int j, char **argv)
{
	int a;
	int b;
	int m;
	int n;

	m = 0;
	a = i - ((i - 1) % 3);
	while (m < 3)
	{
		n = 0;
		b = j - (j % 3);
		while (n < 3)
		{
			if (argv[i][j] == argv[a][b] && a != i && b != j)
				return (0);
			b++;
			n++;
		}
		a++;
		m++;
	}
	return (1);
}

int	check_dbl(int i, int j, char **argv)
{
	if (check_line(i, j, argv) == 0)
		return (0);
	if (check_column(i, j, argv) == 0)
		return (0);
	if (check_sqr(i, j, argv) == 0)
		return (0);
	return (1);
}

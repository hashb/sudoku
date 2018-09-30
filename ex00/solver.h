/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 21:45:20 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/29 22:45:25 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
#define SOLVER_H

struct coord
{
	int x;
	int y;
};

coord	ft_get_box_start(coord idx)
{
	coord res;

	res.x = (int)idx.x/3 * 3;
	res.y = (int)idx.y/3 * 3;
	return (res);
}

int		ft_check_3x3(coord idx, int sudoku_grid[9][9])
{
	int i;
	int j;
	int val;
	coord idx_box;
	int check[10];

	i = 0;
	while (i <= 9)
		check[i++] = 0;
	idx_box = ft_get_box_start(idx);
	i = idx_box.x;
	j = idx_box.y;
	while (i < 3)
	{
		while (j < 3)
		{
			val = sudoku_grid[i][j];
			if (check[val] == -1)
				return (0);
			check[val] = -1;
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_check_row(coord idx, int sudoku_grid[9][9])
{
	int i;
	int j;
	int val;
	int check[10];

	i = 0;
	while (i <= 9)
		check[i++] = 0;
	i = idx.x;
	j = 0;
	while (j < 9)
	{
		val = sudoku_grid[i][j];
		if (check[val] == -1)
			return (0);
		check[val] = -1;
		j++;
	}
	return (1);
}

int		ft_check_col(coord idx, int sudoku_grid[9][9])
{
	int i;
	int j;
	int val;
	int check[10];

	i = 0;
	while (i <= 9)
		check[i++] = 0;
	i = 0;
	j = idx.y;
	while (i < 9)
	{
		val = sudoku_grid[i][j];
		if (check[val] == -1)
			return (0);
		check[val] = -1;
		i++;
	}
	return (1);
}

#endif /* SOLVER_H */
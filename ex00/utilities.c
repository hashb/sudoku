/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 12:32:54 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/30 16:22:52 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"

struct s_coord		ft_get_box_start(struct s_coord idx)
{
	struct s_coord	res;

	res.x = ((int)idx.x / 3) * 3;
	res.y = ((int)idx.y / 3) * 3;
	return (res);
}

int					ft_check_3x3(struct s_coord idx, int sudoku_grid[9][9])
{
	int				i;
	int				val;
	struct s_coord	idx_box;
	int				check[10];

	i = 0;
	while (i <= 9)
		check[i++] = 0;
	idx_box = ft_get_box_start(idx);
	i = 0;
	while (i < 9)
	{
		val = sudoku_grid[(i / 3) + idx_box.x][(i % 3) + idx_box.y];
		if (check[val] == -1)
			return (0);
		else if (val != 0)
			check[val] = -1;
		i++;
	}
	return (1);
}

int					ft_check_row(struct s_coord idx, int sudoku_grid[9][9])
{
	int				i;
	int				j;
	int				val;
	int				check[10];

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
		else if (val != 0)
			check[val] = -1;
		j++;
	}
	return (1);
}

int					ft_check_col(struct s_coord idx, int sudoku_grid[9][9])
{
	int				i;
	int				j;
	int				val;
	int				check[10];

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
		else if (val != 0)
			check[val] = -1;
		i++;
	}
	return (1);
}

int					ft_is_valid(struct s_coord idx, int sudoku_grid[9][9])
{
	if (ft_check_3x3(idx, sudoku_grid)
		&& ft_check_col(idx, sudoku_grid)
		&& ft_check_row(idx, sudoku_grid))
		return (1);
	return (0);
}

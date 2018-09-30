/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 11:19:58 by smoissel          #+#    #+#             */
/*   Updated: 2018/09/30 00:39:57 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solver.h"
// int 	solver(struct Sudoku S)
// {
// 	int 	y;
// 	int 	x;
// 	int 	test_value;
// 	int 	result;

// 	x = 0;
// 	y = 0;
// 	test_value = 1;

// 	if (!check(S))
// 		return (0);
// 	while (x < 9)
// 	{
// 		while (y < 9)
// 		{
// 			if (S.point[x][y] == 0 )
// 			{
// 				while (test_value != 9)
// 				{
// 					S.point[x][y] = test_value;
// 					result += solver(S);
// 					test_value++;
// 				}
// 			}
// 		}
// 	}
// 	return (result);
// }

int		ft_is_valid(int sudoku_grid[9][9])
{
	// int is_valid;

	// is_valid = 0;
	// if (**sudoku_grid)
	// 	return (1);
	// return (1);
	struct coord idx;
	idx.x = 0;
	idx.y = 0;
	if (ft_check_3x3(idx, sudoku_grid) && ft_check_col(idx, sudoku_grid) && ft_check_row(idx, sudoku_grid))
		return (1);
	return (0);
}

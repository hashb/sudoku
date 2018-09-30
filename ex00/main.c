/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 11:30:26 by smoissel          #+#    #+#             */
/*   Updated: 2018/09/30 00:46:53 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*   */
/*  ./sudoku "9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......." | cat -e */
/*   */
#include "sudoku.h"

int		main(int argc, char **argv)
{
	int sudoku_grid[9][9];

	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (1);
	}
	ft_read_sudoku(sudoku_grid, argv);
	// if (!ft_is_valid(sudoku_grid))
	// {
	// 	ft_putstr("Error Sudoku is not valid\n");
	// 	return (1);
	// }
	// if (ft_solver(sudoku_grid))
		ft_print_sudoku(sudoku_grid);
	// else
	// {
	// 	ft_putstr("Error\n");
	// 	return (1);
	// }
	return (0);
}

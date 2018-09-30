/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 11:30:26 by smoissel          #+#    #+#             */
/*   Updated: 2018/09/29 20:05:12 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*   */
/*  ./sudoku "9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......." | cat -e */
/*   */

#include "lib_sudoku.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (1);
	}
	int sudoku_grid[9][9];
	ft_read_sudoku(sudoku_grid, argv);
	// int i = 0;
	// int j = 0;
	// while (i < 9)
	// {
	// 	j = 0;
	// 	printf("\t");
	// 	while (j < 9)
	// 	{
	// 		printf("%i ", sudoku_grid[i][j]);
	// 		j++;
	// 	}
	// 	i++;
	// 	printf("\n");
	// }

	// if (!ft_is_valid(sudoku_grid))
	// {
	// 	ft_putstr("Error\n");
	// 	return (1);
	// }
	// ft_solver(sudoku_grid);
	ft_print_sudoku(sudoku_grid);
	return (0);
}

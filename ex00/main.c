/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 11:30:26 by smoissel          #+#    #+#             */
/*   Updated: 2018/09/29 19:46:55 by kchenna          ###   ########.fr       */
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
	int **sudoku_grid;
	sudoku_grid = ft_read_sudoku(argv);
	int i = 0;
	int j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			printf("\t==>%i ", **sudoku_grid);
			j++;
		}
		i++;
		printf("\n");
	}

	// if (!ft_is_valid(sudoku_grid))
	// {
	// 	ft_putstr("Error\n");
	// 	return (1);
	// }
	// ft_solver(sudoku_grid);
	// ft_print_sudoku(sudoku_grid);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoissel <smoissel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 11:19:58 by smoissel          #+#    #+#             */
/*   Updated: 2018/09/29 21:20:47 by smoissel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int 	solver(int S[9][9], int max_search)
{	/* Will return the number of solvable sudokus for one grid */
	int 	y;
	int 	x;
	int 	test_value;
	int 	result;

	x = 0;
	y = 0;
	test_value = 1;

	if (!check(S))
		return (0);
	while (x < 9)
	{
		while (y < 9)
		{
			if (S[x][y] == 0 )
			{	
				while (test_value != 9)
				{
					S[x][y] = test_value;
					result += solver(S, max_search);
					if (result >= max_search)
						return (result);
					test_value++;
				}
				return (result);
			}
		}
	}
	return (result);
}
int 	check(int S[9][9])
{
	return (0);
}

void	ft_read_sudoku(int sudoku_grid[9][9], char **argv)
{
    int i;
    int j;
    char *str;

    i = 1;
    while (i <= 9)
    {
        j = 0;
        str = argv[i];
        while (*str)
        {
            if (*str == '.')
                sudoku_grid[i - 1][j] = 0;
            else
                sudoku_grid[i - 1][j] = *str - '0';
            str++;
            j++;
        }
        i++;
    }
}
int 	main(int argc, char **argv)
{
	int 	sudoku_grid[9][9];
	int 	result;

	ft_read_sudoku(sudoku_grid, argv);
	result = solver(sudoku_grid, 2);
}
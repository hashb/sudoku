/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 11:05:26 by smoissel          #+#    #+#             */
/*   Updated: 2018/09/30 01:39:36 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_solver(int S[9][9], int max_search);

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

void	ft_print_line(int *line)
{
    int i;

    i = 0;
    while (i < 9)
    {
        ft_putchar(line[i] + '0');
        if (i != 8)
            ft_putchar(' ');
        i++;
    }
    return ;
}

void	ft_print_sudoku(int sudoku_grid[9][9])
{
    int i;

    i = 0;
    while (i < 9)
    {
        ft_print_line(sudoku_grid[i]);
		ft_putchar('\n');
        i++;
    }
    return ;
}

int		main(int argc, char **argv)
{
	int sudoku_grid[9][9];

	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (1);
	}
	ft_read_sudoku(sudoku_grid, argv);
	struct coord idx;
	idx.x = 0;
	idx.y = 0;
	if (!ft_is_valid(idx, sudoku_grid))
	{
		ft_putstr("Error Sudoku is not valid\n");
		return (1);
	}
	if (ft_solver(sudoku_grid, 2))
		ft_print_sudoku(sudoku_grid);
	else
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}

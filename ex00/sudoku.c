/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 11:05:26 by smoissel          #+#    #+#             */
/*   Updated: 2018/09/30 16:17:57 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void					ft_read_sudoku(int sudoku_grid[9][9], char **argv)
{
	int					i;
	int					j;
	char				*str;

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

void					ft_print_line(int *line)
{
	int					i;

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

void					ft_print_sudoku(int sudoku_grid[9][9])
{
	int					i;

	i = 0;
	while (i < 9)
	{
		ft_print_line(sudoku_grid[i]);
		ft_putchar('\n');
		i++;
	}
	return ;
}

int						ft_is_all_valid(int sudoku_grid[9][9])
{
	int					i;
	int					j;
	struct s_coord		idx;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			idx.x = i;
			idx.y = j;
			if (!ft_is_valid(idx, sudoku_grid))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int						main(int argc, char **argv)
{
	int					sudoku_grid[9][9];

	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (1);
	}
	ft_read_sudoku(sudoku_grid, argv);
	if (!ft_is_all_valid(sudoku_grid))
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (ft_solver(sudoku_grid) && ft_is_all_valid(sudoku_grid))
		ft_print_sudoku(sudoku_grid);
	else
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}

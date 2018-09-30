/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 18:22:35 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/30 01:39:30 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_SUDOKU_H
#define LIB_SUDOKU_H

#include <unistd.h>

struct coord
{
	int x;
	int y;
};

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_read_sudoku(int sudoku_grid[9][9], char **argv);
void	ft_print_line(int *line);
void	ft_print_sudoku(int sudoku_grid[9][9]);
int		ft_is_valid(struct coord idx, int sudoku_grid[9][9]);



struct coord	ft_get_box_start(struct coord idx)
{
	struct coord res;

	res.x = (int)idx.x/3 * 3;
	res.y = (int)idx.y/3 * 3;
	return (res);
}

int		ft_check_3x3(struct coord idx, int sudoku_grid[9][9])
{
	int i;
	int j;
	int val;
	struct coord idx_box;
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
			val = sudoku_grid[i][j++];
			if (check[val] == -1)
				return (0);
			else if (val != 0)
				check[val] = -1;
		}
		i++;
	}
	return (1);
}

int		ft_check_row(struct coord idx, int sudoku_grid[9][9])
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
		else if (val != 0)
			check[val] = -1;
		j++;
	}
	return (1);
}

int		ft_check_col(struct coord idx, int sudoku_grid[9][9])
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
		else if (val != 0)
			check[val] = -1;
		i++;
	}
	return (1);
}

int		ft_is_valid(struct coord idx, int sudoku_grid[9][9])
{
	if (ft_check_3x3(idx, sudoku_grid) && ft_check_col(idx, sudoku_grid) && ft_check_row(idx, sudoku_grid))
		return (1);
	return (0);

}

#endif /* LIB_SUDOKU_H */

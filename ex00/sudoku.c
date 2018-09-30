/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 11:05:26 by smoissel          #+#    #+#             */
/*   Updated: 2018/09/29 19:48:08 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int		**ft_read_sudoku(char **argv)
{
    int i;
    int j;
    char *str;
    int **sudoku_grid = (int **)malloc(9 * sizeof(int *));

    i = 1;
    while (i <= 9)
    {
        j = 0;
        sudoku_grid[i] = (int *)malloc(sizeof(int) * 9);
        str = argv[i];
        while (*str)
        {
            if (*str == '.')
                sudoku_grid[i][j] = 0;
            else
                sudoku_grid[i][j] = *str - '0';
            str++;
            j++;
        }
        i++;
    }
    return (sudoku_grid);
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
        ft_putchar('c');
        i++;
    }
    return ;
}

void	ft_print_sudoku(int **sudoku_grid)
{
    int i;

    i = 0;
    while (i < 9)
    {
        ft_print_line(sudoku_grid[i]);
        i++;
    }
    return ;
}

/*
int 	is_valide_line(char *ligneN)
{
	int 	nbr_count[9];
	int 	i;
	int 	j;

	i = 0;
	j = 0;
	while (ligneN[i] != '\0')
	{
		while (ligneN[j] != '\0')
		{
			if (ligneN[i] == ligneN[j] && ligneN[i] != '.')
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
*/

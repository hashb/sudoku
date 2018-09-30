/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoissel <smoissel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 11:30:26 by smoissel          #+#    #+#             */
/*   Updated: 2018/09/29 21:17:55 by smoissel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

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
	ft_read_sudoku(sudoku_grid, argv);
	
}


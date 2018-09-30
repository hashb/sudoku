/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_sudoku.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 18:22:35 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/29 19:47:01 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_SUDOKU_H
#define LIB_SUDOKU_H

#include <unistd.h>

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

int		**ft_read_sudoku(char **argv);
void	ft_print_line(int *line);
void	ft_print_sudoku(int **sudoku_grid);

#endif /* LIB_SUDOKU_H */

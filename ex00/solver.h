/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 12:05:08 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/30 12:40:43 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define SOLVER_H

struct	s_coord
{
	int x;
	int y;
};
int		ft_is_valid(struct s_coord idx, int sudoku_grid[9][9]);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_print_sudoku(int sudoku_grid[9][9]);
#endif

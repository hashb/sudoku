/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 12:33:36 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/30 12:43:12 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILITIES_H
# define UTILITIES_H

struct				s_coord
{
	int x;
	int y;
};
void				ft_read_sudoku(int sudoku_grid[9][9], char **argv);
int					ft_solver(int sudoku_grid[9][9]);
void				ft_print_line(int *line);
void				ft_print_sudoku(int sudoku_grid[9][9]);
int					ft_is_valid(struct s_coord idx, int sudoku_grid[9][9]);
struct s_coord		ft_get_box_start(struct s_coord idx);
#endif

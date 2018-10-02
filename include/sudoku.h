/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 18:22:35 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/30 16:11:32 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_SUDOKU_H
# define LIB_SUDOKU_H

struct				s_coord
{
	int x;
	int y;
};
void				ft_putchar(char c);
void				ft_putstr(char *str);
int					ft_solver(int sudoku_grid[9][9]);
void				ft_read_sudoku(int sudoku_grid[9][9], char **argv);
void				ft_print_line(int *line);
void				ft_print_sudoku(int sudoku_grid[9][9]);
int					ft_is_valid(struct s_coord idx, int sudoku_grid[9][9]);
int					ft_is_all_valid(int sudoku_grid[9][9]);
struct s_coord		ft_get_box_start(struct s_coord idx);
#endif

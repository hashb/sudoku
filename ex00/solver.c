/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 11:19:58 by smoissel          #+#    #+#             */
/*   Updated: 2018/09/30 01:40:02 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct coord
{
	int x;
	int y;
};
int		ft_is_valid(struct coord idx, int sudoku_grid[9][9]);
void	ft_putchar(char c);
void	ft_putstr(char *str);

int		ft_solver(int S[9][9], int max_search)
{   /* Will return the number of solvable sudokus for one grid The input grid should ALWAYS be a VALID one !!! */
	int		test_value;
	int		result;
	struct coord idx;

	idx.x = 0;
	idx.y = 0;
	test_value = 1;
	result = 0;
	while (idx.x < 9)
	{
		while (idx.y < 9)
		{
			if (S[idx.x][idx.y] == 0)
			{
				while (test_value != 9)
				{
					S[idx.x][idx.y] = test_value;
					if (ft_is_valid(idx, S))
					{
						ft_putstr("is_valid_value working\n");
						result += ft_solver(S, max_search);
					}
					if (result >= max_search)
						return (result);
					test_value++;
				}
				return (result);
			}
			idx.y++;
		}
		idx.x++;
	}
	return (1);
}



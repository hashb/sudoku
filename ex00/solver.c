/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoissel <smoissel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 11:19:58 by smoissel          #+#    #+#             */
/*   Updated: 2018/09/29 21:08:49 by smoissel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int 	solver(struct Sudoku S, int max_search)
{	/* Will return the number of solvable sudokus for one grid */
	int 	y;
	int 	x;
	int 	test_value;
	int 	result;

	x = 0;
	y = 0;
	test_value = 1;

	if (!check(S))
		return (0);
	while (x < 9)
	{
		while (y < 9)
		{
			if (S.point[x][y] == 0 )
			{	
				while (test_value != 9)
				{
					S.point[x][y] = test_value;
					result += solver(S, max_search);
					if (result >= max_search)
						return (result);
					test_value++;
				}
				return (result);
			}
		}
	}
	return (result);
}
int 	check(struct Sudoku S)
{
	return (0);
}

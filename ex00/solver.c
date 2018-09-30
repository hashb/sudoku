/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoissel <smoissel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 11:19:58 by smoissel          #+#    #+#             */
/*   Updated: 2018/09/29 20:39:09 by smoissel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int 	solver(struct Sudoku S)
{	
	int 	y;
	int 	x;
	int 	test_value;
	int 	result;

	x = 0;
	y = 0;
	test_value = 1;

	if (!check(S))
		return (0);
	while (x <= 9)
	{
		while (y <= 9)
		{
			if (S.point[x][y] == 0 )
			{	
				while (test_value != 9)
				{
					S.point[x][y] = test_value;
					result += solver(S);
				}
				test_value++;
			}
		}
	}
	return (result);
}

int 	is_valide(struct Sudoku S)
{
	/* Return 1 only if the number of solutions of a given sudoku is equal to 1, 0 otherwise. */
	if (solver(S) != 1)
		return (0);
	return (1);
}

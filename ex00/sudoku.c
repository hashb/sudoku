/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoissel <smoissel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 11:05:26 by smoissel          #+#    #+#             */
/*   Updated: 2018/09/29 17:48:24 by smoissel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoissel <smoissel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 17:33:17 by smoissel          #+#    #+#             */
/*   Updated: 2018/09/29 21:40:06 by smoissel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define FT_H
#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putstr(char *str)
{   
    int     count;
    count = 0;
    while(str[count] != '\0')
    {
        ft_putchar(str[count]);
        count++;
    }
}

char		*ft_strdup(char *src)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	i = 0;
	while (src[i])
	{
		++size;
		++i;
	}
	new = malloc(sizeof(char) * size);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

struct Sudoku
{	/* It contains the current value for each case. */
	int 	point[9][9];
};

typedef struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}    t_stock_par;

t_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			index;
	t_stock_par	*params;

	if (!(params = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	index = 0;
	while (index < ac)
	{
		params[index].str = av[index];
		params[index].copy = ft_strdup(av[index]);
		++index;
	}
	params[index].str = 0;
	return (params);
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-faqu <mel-faqu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:30:04 by mel-faqu          #+#    #+#             */
/*   Updated: 2022/09/11 19:49:49 by mel-faqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		read_index;
	int		i;
	bool	echanger;

	read_index = 0;
	while (true)
	{
		echanger = false;
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
				echanger = true;
			}
			i++;
		}
		if (!echanger)
		{
			break ;
		}
		read_index++;
	}
}

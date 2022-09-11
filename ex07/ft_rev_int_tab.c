/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-faqu <mel-faqu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:17:51 by mel-faqu          #+#    #+#             */
/*   Updated: 2022/09/11 19:29:18 by mel-faqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	escale;

	i = 0;
	while (i < size / 2)
	{
		escale = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = escale;
		i++;
	}
}

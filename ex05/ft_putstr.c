/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-faqu <mel-faqu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:49:32 by mel-faqu          #+#    #+#             */
/*   Updated: 2022/09/11 19:07:12 by mel-faqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char	current_char;

	while (true)
	{
		current_char = *str;
		if (current_char == '\0')
		{
			break ;
		}
		ft_putchar(current_char);
		str++;
	}
}

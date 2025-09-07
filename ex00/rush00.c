/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tetito <tetito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 11:30:58 by tetito            #+#    #+#             */
/*   Updated: 2025/09/07 16:44:10 by tetito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_first_last(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if ((i == 0) || (i == x - 1))
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
}

void	print_middle(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if ((i == 0) || (i == x - 1))
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
}

int	rush(int x, int y)
{
	int	i;

	if ((x <= 0) || (y <= 0))
		return (1);
	i = 0;
	while (i < y)
	{
		if ((i == 0) || (i == y - 1))
		{
			if (i == y - 1)
				ft_putchar('\n');
			print_first_last(x);
		}
		else
		{
			ft_putchar('\n');
			print_middle(x);
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}

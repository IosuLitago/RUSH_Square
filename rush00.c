/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:52:53 by mhumbert          #+#    #+#             */
/*   Updated: 2025/08/30 18:13:33 by ilitago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('o');
	while (i < x - 2)
	{
		ft_putchar('-');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	last_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('o');
	while (i < x - 2)
	{
		ft_putchar('-');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	if (x > 0 && y > 0)
	{
		first_line(x);
		while (i < y - 2)
		{
			ft_putchar('|');
			j = 0;
			while (j < x - 2)
			{
				ft_putchar(' ');
				j++;
			}
			if (x > 1)
				ft_putchar('|');
			ft_putchar('\n');
			i++;
		}
		if (y > 1)
			last_line(x);
	}
}

int	main(void)
{
	rush(5, 3);
	rush(5, 1);
	rush(1, 1);
	rush(1, 5);
	return (0);
}

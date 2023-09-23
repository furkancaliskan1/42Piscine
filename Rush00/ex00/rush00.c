/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fucalisk <fucalisk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:04:20 by fucalisk          #+#    #+#             */
/*   Updated: 2023/09/23 23:04:20 by fucalisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	b = 1;

	while (b <= y && x > 0)
	{
		a = 1;
		while (a <= x)
		{
			if ((a == 1 && b == 1) || (a == x && b == y) || (a == 1 && b == y) || (a == x && b == 1))
				ft_putchar('o');
			else if (b == 1 || b == y)
				ft_putchar('-');
			else if (a == 1 || a == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}

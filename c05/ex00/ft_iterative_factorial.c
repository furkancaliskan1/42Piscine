/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fucalisk <fucalisk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:00:03 by fucalisk          #+#    #+#             */
/*   Updated: 2023/09/23 23:00:03 by fucalisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (result);
}

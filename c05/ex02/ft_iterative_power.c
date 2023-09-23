/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fucalisk <fucalisk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:00:12 by fucalisk          #+#    #+#             */
/*   Updated: 2023/09/23 23:00:12 by fucalisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

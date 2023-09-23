/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fucalisk <fucalisk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:02:14 by fucalisk          #+#    #+#             */
/*   Updated: 2023/09/23 23:02:14 by fucalisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int prime)
{
	unsigned int	i;

	i = 2;
	if (prime <= 1)
		return (0);
	while (i * i <= prime)
	{
		if (prime % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

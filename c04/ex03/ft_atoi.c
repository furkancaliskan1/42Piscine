/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fucalisk <fucalisk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 22:59:30 by fucalisk          #+#    #+#             */
/*   Updated: 2023/09/23 22:59:30 by fucalisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	if (!str[i])
		return (0);
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r' \
		|| str[i] == '\f' || str[i] == ' ')
		i += 1;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -sign;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += str[i++] - 48;
	}
	return (nbr * sign);
}

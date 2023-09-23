/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fucalisk <fucalisk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 22:54:28 by fucalisk          #+#    #+#             */
/*   Updated: 2023/09/23 22:54:28 by fucalisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n) 
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
#include <stdio.h>
int main()
{
char a[] = "sude";
char b[] = "mert";

	printf("%s",ft_strncpy(a,b,4));
}
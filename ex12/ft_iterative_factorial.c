/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:12:44 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/06 16:20:28 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long	temp;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	temp = 1;
	while (nb > 1 && temp <= 2147483647)
	{
		temp *= nb;
		nb--;
	}
	if (temp <= 2147483647)
	{
		return ((int)temp);
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int nb = 13;
	printf("El fatorial de %d es %d", nb, ft_iterative_factorial(nb));
	return (0);
}
*/

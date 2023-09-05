/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:41:36 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/05 15:44:18 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	temp;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (nb > 1)
	{
		temp = ft_recursive_factorial(nb - 1);
		if (temp != 0 && nb <= 2147483647 / temp)
		{
			return (nb * temp);
		}
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int nb = 100;
	printf("El factorial de %d es %d", nb, ft_recursive_factorial(nb));
	return (0);
}
*/

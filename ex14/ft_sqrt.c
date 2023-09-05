/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:46:27 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/05 16:09:21 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
	{
		return (0);
	}
	i = 1;
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int nb = 121;
	printf("La raiz cuadrada de %d es %d", nb, ft_sqrt(nb));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:55:05 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/05 14:08:52 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include<stdio.h>
int	main(void)
{
	int	a,b,div,mod;

	a = 10;
	b = 4;
	ft_div_mod(a, b, &div, &mod);
	printf("La division entera de  %d entre %d es: %d\n", a, b, div);
	printf("El residuo de %d entre %d es: %d\n", a, b, mod);
	return (0);
}
*/

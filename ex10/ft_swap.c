/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:39:31 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/05 13:52:58 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>
int main(void)
{
	int	a;
	int	b;
	
	a = 1;
	b = 5;
	printf("El valor de a es : %d y el valor de b es: %d\n", a, b);
	ft_swap(&a,&b);
	printf("El nuevo valor de a es : %d y el nuevo valor de b es: %d\n", a, b);
	return (0);
}
*/

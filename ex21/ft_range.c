/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 20:25:20 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/11 18:24:59 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*str;

	if (min >= max)
	{
		return (NULL);
	}
	str = malloc(max - min);
	len = 0;
	while (min < max)
	{
		str[len] = min;
		len++;
		min++;
	}
	str[len] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	int min, max, counter;
	int *src;
	min = 1;
	max = 7;
	src = ft_range(min, max);
	printf("Valores entre %d y %d:\n", min, max-1);
	counter = 0;
	while(src[counter] != '\0')
	{
		printf("%d\n",src[counter]);
		counter++;
	}
	free(src);
	return(0);	
}
*/

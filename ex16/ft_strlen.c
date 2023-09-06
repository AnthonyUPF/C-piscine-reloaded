/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:46:20 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/06 16:32:04 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[] = "Hola mundo!";
	printf("Longitud con ft_strlen: %d\n", ft_strlen(str));	
	printf("Longitud con strlen: %lu", strlen(str));
	return (0);
}
*/

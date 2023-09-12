/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:35:31 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/12 20:07:05 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char s1[] = "Hola!";
	char s2[] = "Hola mundo!";
	const char s3[] = "Hola!";
	const char s4[] = "Hola mundo!";
	printf("Resultado de ft_strcmp: %d\n", ft_strcmp(s1,s2)); 
	printf("Resultado de strcmp: %d", strcmp(s3,s4)); 
	return (0);
}
*/

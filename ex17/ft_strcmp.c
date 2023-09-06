/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:35:31 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/06 17:00:00 by anthtorr         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	len1;
	int	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len1 < len2)
	{
		return (1);
	}
	else if (len1 > len2)
	{
		return (-1);
	}
	return (0);
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

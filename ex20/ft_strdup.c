/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 19:48:41 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/08 20:21:36 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		counter;

	duplicate = malloc(ft_strlen(src) + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	counter = 0;
	while (src[counter] != '\0')
	{
		duplicate[counter] = src[counter];
		counter++;
	}
	duplicate[counter] = '\0';
	return (duplicate);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char str1[] = "Hola mundo";
	char *str2 = ft_strdup(str1);
	char *str3 = strdup(str1);
	printf("Resultado con ft_strdup: %s\n", str2);
	printf("Resultado con strdup: %s", str3);
	free(str2);
	return (0);
}
*/

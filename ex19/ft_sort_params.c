/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:58:53 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/12 20:33:44 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_params(int argc, char **argv)
{
	char	*temp;
	int		i;

	i = 1;
	while (i + 1 < argc)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 0;
		}
		i++;
	}
}

void	ft_printstr(int argc, char **argv)
{
	int	counter;

	counter = 1;
	while (counter < argc)
	{
		ft_putstr(argv[counter]);
		ft_putchar('\n');
		counter++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_params(argc, argv);
		ft_printstr(argc, argv);
	}
	return (0);
}

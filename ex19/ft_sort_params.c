/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:58:53 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/06 19:37:07 by anthtorr         ###   ########.fr       */
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

int	ft_ascii_value(char *str)
{
	int	sum;

	sum = 0;
	while (*str != '\0')
	{
		sum += *str;
		str++;
	}
	return (sum);
}

void	ft_printstr(int lenstr, char **str)
{
	int	counter;

	counter = 1;
	while (counter < lenstr)
	{
		ft_putstr(str[counter]);
		ft_putchar('\n');
		counter++;
	}
}

int	main(int argc, char **argv)
{
	char	*temp;
	int		lenstr1;
	int		lenstr2;
	int		counter;

	if (argc > 1)
	{
		counter = 1;
		while (counter + 1 < argc)
		{
			lenstr1 = ft_ascii_value(argv[counter]);
			lenstr2 = ft_ascii_value(argv[counter + 1]);
			if (lenstr1 > lenstr2)
			{
				temp = argv[counter];
				argv[counter] = argv[counter + 1];
				argv[counter + 1] = temp;
				counter = 0;
			}
			counter++;
		}
		ft_printstr(argc, argv);
	}
	return (0);
}

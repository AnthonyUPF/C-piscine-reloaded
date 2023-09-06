/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:09:20 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/06 17:41:28 by anthtorr         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int		counter;

	if (argc > 1)
	{
		counter = 1;
		while (counter < argc)
		{
			ft_putstr(argv[counter]);
			ft_putchar('\n');
			counter++;
		}
	}
	return (0);
}

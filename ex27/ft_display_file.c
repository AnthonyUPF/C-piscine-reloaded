/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:15:38 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/12 21:40:43 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	display_file(char *filename)
{
	int		fd;
	char	buffer[4096];
	int		bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("Cannot read file.\n");
		return ;
	}
	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		if (argc < 2)
		{
			ft_putstr("File name missing.\n");
		}
		else
		{
			ft_putstr("Too many arguments.\n");
		}
		return (1);
	}
	display_file(argv[1]);
	return (0);
}

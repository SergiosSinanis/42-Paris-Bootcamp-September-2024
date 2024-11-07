/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:10:35 by ssinanis          #+#    #+#             */
/*   Updated: 2024/11/05 14:59:53 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *str)
{
	char	buf[1024];
	int		fd;
	int		lu;

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	lu = read(fd, buf, sizeof(buf));
	while (lu > 0)
	{
		write (1, buf, lu);
		lu = read(fd, buf, sizeof(buf));
	}
	if (lu == -1)
	{
		write(2, "Cannot read file.\n", 18);
	}
	close (fd);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		if (argc < 2)
		{
			write (2, "File name missing.\n", 19);
		}
		else
		{
			write (2, "Too many arguments.\n", 20);
		}
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}

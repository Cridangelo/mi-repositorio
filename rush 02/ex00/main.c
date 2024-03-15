/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:19:59 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/02/27 15:40:35 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char ft_checknbr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
		{
			write(1, "Error\n", 6);
		}
		i++;
	}
	return (1);
}

int	read_dict(char *str)
{
	int fd;
	char *size;
	ssize_t bytes_read;
	off_t offset;

	offset = 0;

	fd = open("numbers.dict", O_RDONLY);
	if(fd == -1)
	{
		write(1, "Error\n", 6);
		return (1);
	}

	size = (char *)malloc(sizeof(char) * 1000);

	bytes_read = read(fd, size, 1000);
	if(bytes_read == -1)
	{
		write(1, "Error\n", 6);
		close(fd);
		free(size);
		return(1);
	}

	while (offset < bytes_read)
	{
		if(size[offset] == str ) 
		{
			offset += 3;
			while (offset < bytes_read && size[offset] != '\n')
			{
				write(1, &size[offset], 1);
				offset++;
			}
			break;
		}
		offset++;
	}
	close(fd);
	free(size);

	return (0);
}
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_checknbr(argv[1]);
	read_dict(argv[1]);
	return (0);
}

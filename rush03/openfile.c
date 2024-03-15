/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:33:42 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/02/28 17:02:01 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int read_dict(char *str, char *filename)
{
    int fd;
    char *size;
    char *archivo; 
    ssize_t bytes_read;
    off_t offset;
	int i;

	i = 0;
    offset = 0;
    fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
        write(1, "Error\n", 6);
        return (1);
    }
    size = (char *)malloc(sizeof(char) * 10000);
	if (size == -1)
	{
		write(1, "Error\n", 6);
        close(fd);
        return(1);
    }
    bytes_read = read(fd, size, 10000);
	if (bytes_read == -1)
	{
        write(1, "Error\n", 6);
        close(fd);
        free(size);
        return (1);
    }
	archivo = (char *)malloc(sizeof(char) * (bytes_read + 1));
	if (archivo == -1)
	{
		write(1, "Error\n", 6);
        close(fd);
        free(size);
        return (1);
    }
	while (i < bytes_read)
	{
		archivo[i] = size[i];
		i++;
	}
	archivo[bytes_read] = '\0';
    close(fd);
	free(size);
	free(archivo);
    return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <acoayo-f@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 00:44:42 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/11/12 01:18:30 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*clean_storage(char *storage)
{
	char	*new_storage;
	char	*ptr;

	ptr = ft_strchr(storage, '\n');
	if (!ptr || !*(ptr + 1))
		return (free(storage), NULL);
	new_storage = ft_strdup(ptr + 1);
	free(storage);
	return (new_storage);
}

static char	*new_line(char *storage)
{
	char	*line;
	char	*ptr;
	int		len;

	ptr = ft_strchr(storage, '\n');
	len = (ptr - storage) + 1;
	line = ft_substr(storage, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

static char	*read_buffer(int fd, char *storage)
{
	ssize_t	rid;
	char	*buffer;
	char	*temp;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (free(storage), NULL);
	rid = read(fd, buffer, BUFFER_SIZE);
	while (rid > 0)
	{
		buffer[rid] = '\0';
		temp = ft_strjoin(storage, buffer);
		storage = temp;
		if (ft_strchr(buffer, '\n'))
			break ;
		rid = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
	if (rid == -1)
		return (free(storage), NULL);
	return (storage);
}

char	*get_next_line(int fd)
{
	static char	*storage[SIZE_FD] = {NULL};
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!storage[fd] || !ft_strchr(storage[fd], '\n'))
		storage[fd] = read_buffer(fd, storage[fd]);
	if (!storage[fd])
		return (NULL);
	line = new_line(storage[fd]);
	if (!line)
		return (free(storage[fd]), storage[fd] = NULL, NULL);
	storage[fd] = clean_storage(storage[fd]);
	return (line);
}


// #include <stdio.h>
// #include <fcntl.h>
// #include "get_next_line_bonus.h"

// int main(void)
// {
// 	int fd1;
// 	int fd2;
// 	int fd3;
// 	char *line1;
// 	char *line2;
// 	char *line3;

// 	fd1 = open ("txt1.txt", O_RDONLY);
// 	if (fd1 == -1)
// 	{
// 		perror("Error al abrir el archivofd1");
// 		return (1);
// 	}
// 	fd2 = open ("txt2.txt", O_RDONLY);
// 	if (fd2 == -1)
// 	{
// 		perror("Error al abrir el archivofd2");
// 		return (1);
// 	}
// 	fd3 = open ("txt3.txt", O_RDONLY);
// 	if (fd3 == -1)
// 	{
// 		perror("Error al abrir el archivofd3");
// 		return (1);
// 	}
// 	line1 = get_next_line(fd1);
// 	printf("%s", line1);
// 	free (line1);

// 	line2 = get_next_line(fd2);
// 	printf("%s", line2);
// 	free (line2);

// 	line3 = get_next_line(fd3);
// 	printf("%s", line3);
// 	free (line3);
	
// 	close(fd1);
// 	close(fd2);
// 	close(fd3);
// 	return(0);
// }

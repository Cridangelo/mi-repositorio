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

#include "get_next_line.h"

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
	static char	*storage = NULL;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!storage || !ft_strchr(storage, '\n'))
		storage = read_buffer(fd, storage);
	if (!storage)
		return (NULL);
	line = new_line(storage);
	if (!line)
		return (free(storage), storage = NULL, NULL);
	storage = clean_storage(storage);
	return (line);
}

//#include <stdio.h>
//#include <fcntl.h>
//#include "get_next_line.h"
//int main(void)
//{
//    int fd;
//    char *line;
//
//  fd = open("txt.txt", O_RDONLY);
// if (fd == -1)
// {
//    perror("Error al abrir el archivo");
//   return (1);
// }
//
//  while ((line = get_next_line(fd)) != NULL)
// {
//    printf("%s", line); 
//   free(line);        
//}
//
//  close(fd);
//return (0);
//}

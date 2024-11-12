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

static char	*clean_buf(char *line_read)
{
	char	*last_read;
	char	*len;

	len = ft_strchr(last_read, '\n');
	if (!len || !*(len + 1))
		return (free(line_read), NULL);
	last_read = ft_strdup(len +1);
	free(line_read);
	return (last_read);
}

static char	*new_line(char *line_read)
{
	char	*line;
	char	*len_ptr;
	int		len;

	len_ptr = ft_strchr(line_read, '\n');
	len = (len_ptr - line_read) + 1;
	line = ft_substr(line_read, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

static char	*read_buf(int fd, char *line_read)
{
	char	*buff;
	char	*temp;
	ssize_t	rd;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (free(line_read), NULL);
	rd = read(fd, buff, BUFFER_SIZE);
	while (rd > 0)
	{
		buff[rd] = '\0';
		temp = ft_strjoin(line_read, buff);
		line_read = temp;
		if (ft_strchr(line_read, '\n'))
			break ;
		rd = read(fd, buff, BUFFER_SIZE);
	}
	free (buff);
	if (rd == -1)
		return (free(line_read), NULL);
	return (line_read);
}

char	*get_next_line(int fd)
{
	static char	*line_read;
	char		*line_to_return;

	line_read = NULL;
	if (fd < 0 || BUFFER_SIZE == 0)
		return (NULL);
	if (!line_read || !ft_strchr(line_read, '\n'))
		line_read = read_buf(fd, line_read);
	if (!line_read)
		return (NULL);
	line_to_return = new_line(line_read);
	if (!line_to_return)
		return (free(line_read), line_read = NULL, NULL);
	line_read = clean_buf(line_read);
	return (line_to_return);
}

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(void)
{
    int fd;
    char *line;

    fd = open("txt.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("Error al abrir el archivo");
        return (1);
    }

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line); 
        free(line);        
    }

    close(fd);
    return (0);
}


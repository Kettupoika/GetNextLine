/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:40:51 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/19 17:01:29 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_lin.h"

char	*get_next_line(int fd);
char	*fill_line_buffer(int fd, char *left_c, char *buffer);
char	*set_line(char *line_buffer);

int	main()
{

}

char	*get_next_line(int fd)
{
	char		*buffer;
	static char	*stash;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	fill_line_buffer(fd, stash, buffer);
}

char	*fill_line_buffer(int fd, char *stash, char *buffer)
{
	ssize_t		read_bytes;

	read_bytes = 1;
	read_bytes = read(fd, buffer, BUFFER_SIZE);
	if (read_bytes == -1)
	{
		free(buffer);
		return (NULL);
	}
}

char	*set_line (char *line_buffer)
{

}

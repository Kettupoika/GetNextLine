/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:04:41 by rhvidste          #+#    #+#             */
/*   Updated: 2024/12/04 10:25:44 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main()
{
	char	*line;
	int		fd;
	char	buf[256];
	int		chars_read;

	fd = open("tests/test01.txt", O_RDONLY);
	while ((chars_read = read(fd, buf, BUFFER_SIZE)))
	{
		buf[chars_read] = '\0';
		printf("buf: %s\n", buf);
	}

	
	printf("Test file.\n");
	printf("---------------------------------------\n");
	fd = open("tests/test01.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s\n", line);
	free(line);
	while (line)
	{
		line = get_next_line(fd);
		printf("%s\n", line);
		free(line);
	}
	line = get_next_line(fd);
	printf("\n\n");
	close(fd);
	free(line);
	
	printf("A Fragment.\n");
	printf("---------------------------------------\n");
	fd = open("tests/test02.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s\n", line);
	free(line);
	while (line)
	{
		line = get_next_line(fd);
		printf("%s\n", line);
		free(line);
	}
	line = get_next_line(fd);
	printf("\n\n");
	close(fd);
	free(line);
	

	printf("Empty txt file.\n");
	printf("---------------------------------------\n");
	fd = open("tests/test03.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s\n", line);
	free(line);
	while (line)
	{
		line = get_next_line(fd);
		printf("%s\n", line);
		free(line);
	}
	line = get_next_line(fd);
	printf("\n\n");
	close(fd);
	free(line);
	

	printf("Text file with NUll in the middle of line.\n");
	printf("---------------------------------------\n");
	fd = open("tests/test04.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s\n", line);
	free(line);
	while (line)
	{
		line = get_next_line(fd);
		printf("%s\n", line);
		free(line);
	}
	line = get_next_line(fd);
	printf("\n\n");
	close(fd);
	free(line);

	printf("Reading from standrard input.\n");
	printf("---------------------------------------\n");
	fd = 0;
	line = get_next_line(fd);
	printf("%s\n", line);
	free(line);
	while (line)
	{
		line = get_next_line(fd);
		printf("%s\n", line);
		free(line);
	}
	line = get_next_line(fd);
	printf("\n\n");
	//if (line != NULL)
		//free(line);
	close(fd);
	free(line);

	//use ctrl-d to first Null and then terminate the program.
}

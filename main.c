/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 19:13:57 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/11 22:03:15 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>


int	main(void)
{
	int		fd = open("test1.txt", O_RDONLY);
	int		i = 0;
	char	*line;
	// get_next_line(fd, &line);
	// printf("%s\n", line);
	while (get_next_line(fd, &line))
	{
		printf("%d - %s\n", ++i, line);
		free(line);
		line = NULL;
	}
	// get_next_line(fd, &line);
	// printf("%d\n", strcmp(line, "abcdefgh"));
	// get_next_line(fd, &line);
	// printf("%d\n", strcmp(line, "ijklmnop"));
	close(fd);
	return (0);
}
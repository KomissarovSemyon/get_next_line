/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 12:24:33 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/09 18:26:47 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

static t_file	*ft_newfile(int fd)
{
	t_file	*res;

	res = (t_file *)malloc(sizeof(t_file));
	if (!res)
		return (NULL);
	res->fd = fd;
	res->buffer = NULL;
	res->next = NULL;
	return (res);
}

static t_file	*ft_get_file(int fd, t_file **head)
{
	t_file	*now;

	if (fd < 0 || !head)
		return (NULL);
	if (!(*head))
	{
		*head = ft_newfile(fd);
		return (*head);
	}
	now = *head;
	while (now->next)
	{
		if (now->fd == fd)
			return (now);
		now = now->next;
	}
	if (now->fd == fd)
		return (now);
	now->next = ft_newfile(fd);
	return (now->next);
}

static int		ft_delfile(int fd, t_file **head)
{
	t_file	*now;
	t_file	*prev;

	if (fd < 0 || !head || !(*head))
		return (0);
	prev = NULL;
	now = *head;
	while (now)
	{
		if (now->fd == fd)
		{
			now->buffer != NULL ? free(now->buffer) : (0);
			if (prev)
				prev->next = now->next;
			free(now);
			return (0);
		}
		prev = now;
		now = now->next;
	}
	return (0);
}

static int		ft_get_line(t_file *file, char **line, t_file **head)
{
	char	buff[BUFF_SIZE + 1];
	int		len;
	int		size;

	if (!file || !line)
		return (-1);
	len = -1;
	while (!(*line = ft_copyuntil(file->buffer, '\n')) && len)
	{
		len = read(file->fd, buff, BUFF_SIZE);
		if (len == -1)
		{
			ft_delfile(file->fd, head);
			return (len);
		}
		buff[len] = '\0';
		*line = ft_strmjoin(file->buffer, buff);
		free(file->buffer);
		file->buffer = *line;
	}
	if (len == 0)
		return (ft_delfile(file->fd, head));
	size = ft_strchr(file->buffer, '\n') - file->buffer + 1;
	if (size < 0)
		return (0);
	file->buffer = ft_strshift(&(file->buffer), size);
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	t_file	*file;
	static t_file	*head = NULL;

	if (fd < 0 || !line)
		return (-1);
	if (!(file = ft_get_file(fd, &head)))
		return (-1);
	return (ft_get_line(file, line, &head));
}

int	main(void)
{
	int		fd = open("test1.txt", O_RDONLY);
	char	*line;
	// get_next_line(fd, &line);
	// printf("%s\n", line);
	while (get_next_line(fd, &line))
	{
		printf("%s\n", line);
		free(line);
	}
	close(fd);
	return (0);
}
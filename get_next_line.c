/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 12:24:33 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/06 22:10:40 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static t_list	*ft_get_file(int fd, t_list **head)
{
	t_list	*now;

	if (fd < 0 || !head)
		return (NULL);
	now = *head;
	while (now)
	{
		if (now->content_size == (size_t)fd)
			return (now);
		now = now->next;
	}
	return (ft_lstnew(NULL, fd));
}

static char	*ft_strmjoin(char *s1, char *s2)
{
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strjoin("", s2));
	if (!s2)
		return (ft_strjoin(s1, ""));
	return (ft_strjoin(s1, s2));
}

static char		*ft_get_line(t_list *file, int *status)
{
	char	*res;
	int		len;
	char	buff[BUFF_SIZE + 1];

	if (!file)
		return (NULL);
	while (!(res = ft_copyuntil(file->content, '\n')))
	{
		len = read(file->content_size, buff, BUFF_SIZE);
		buff[len] = '\0';
		res = ft_strmjoin(file->content, buff);
		if (!res)
			return (NULL);
		free(file->content);
		file->content = res;
	}
	printf("%s\n%s\n", file->content, ft_strchr(file->content, '\n'));
	file->content = ft_strshift(file->content, ft_strchr(file->content, '\n') - (char *)file->content);
	if (!(file->content) && len == 0)
		*status = 0;
	return (res);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*head = NULL;
	t_list			*file;
	int				status;

	if (fd < 0 || !line)
		return (-1);
	if (!(file = ft_get_file(fd, &head)))
		return (-1);
	status = 1;
	if (!(*line = ft_get_line(file, &status)))
		return (-1);
	return (status);
}

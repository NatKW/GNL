/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:43:59 by nade-la-          #+#    #+#             */
/*   Updated: 2022/02/15 18:32:59 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_read(char *stash, int fd)
{
	char		*buf;
	ssize_t		bytes_read;

	bytes_read = 1;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	while (bytes_read > 0 && !ft_strchr_gnl(stash, '\n'))
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read < 0)
		{
			free(buf);
			return (NULL);
		}
		buf[bytes_read] = '\0';
		stash = ft_strjoin_gnl(stash, buf);
	}
	free(buf);
	return (stash);
}

static char	*ft_get_line(char *stash)
{
	int		i;
	char	*line;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] && stash[i] == '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] && stash[i] == '\n')
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

static char	*ft_get_next(char *stash, char *line)
{
	int		i;
	int		j;
	char	*str;

	if (stash[0] == '\0')
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	i = ft_strlen(line);
	str = malloc(sizeof(char) * (ft_strlen(stash) - i + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (stash[i + j])
	{
		str[j] = stash[i + j];
		j++;
	}
	str[j] = '\0';
	free(stash);
	stash = NULL;
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	line = NULL;
	if (read(fd, NULL, 0) == -1)
		return (NULL);
	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE <= 0 || BUFFER_SIZE >= INT_MAX)
		return (NULL);
	if (stash == 0)
	{
		stash = malloc(sizeof(char) * 1);
		if (stash == 0)
			return (NULL);
		stash[0] = '\0';
	}
	stash = ft_read(stash, fd);
	line = ft_get_line(stash);
	stash = ft_get_next(stash, line);
	if (stash == NULL)
	{
		free(stash);
		free(line);
		return (NULL);
	}
	return (line);
}

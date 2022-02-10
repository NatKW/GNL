/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:43:59 by nade-la-          #+#    #+#             */
/*   Updated: 2022/02/10 17:32:36 by nade-la-         ###   ########.fr       */
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
	while (!ft_strchr_gnl(stash, '\n') && bytes_read > 0)
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

static char	*ft_get_line(char *line)
{
	int		i;
	char	*str;

	i = 0;
	str = NULL;
	while (str[i] && str[i] != '\n')
		i++;
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (*str && *str != '\n')
		*line++ = *str++;
	if (*str == '\n')
		*line++ = '\n';
	*line = '\0';
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
		return (NULL);
	}
	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	str = malloc(sizeof(char) * (ft_strlen(stash) - i + 1));
	if (!line)
		return (NULL);
	j = 0;
	while (stash[j++])
		str[i + j] = stash[j];
	str[j] = '\0';
	free(stash);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (read(fd, NULL, 0) == -1)
		return (NULL);
	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	if (!stash)
	{
		stash = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!stash)
			return (NULL);
		stash[0] = '\0';
	}
	stash = ft_read(stash, fd);
	line = ft_get_line(stash);
	stash = ft_get_next(stash, line);
	return (line);
}

int	main(void)
{
	char	*res;
	int		fd;

	res = NULL;
	fd = open("christina_wow.txt", O_RDONLY);
	res = get_next_line(fd);
	while (res)
	{
		printf("%s\n", res);
		free(res);
		res = get_next_line(fd);
	}
	free(res);
	close(fd);
	return (0);
}

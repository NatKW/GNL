/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thnab <thnab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:43:59 by nade-la-          #+#    #+#             */
/*   Updated: 2022/02/08 19:50:09 by thnab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_read(static char *stash, int fd)
{
	char		*buffer;
	ssize_t		bytes_read;

	bytes_read = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	while (!ft_strchr(buffer, '\n') && bytes_read)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		stash = ft_strjoin_gnl(stash, buffer);
		free(bytes_read);
	}
	return (stash);
}

static char	*ft_get_line(char *line)
{
	int		i;
	char	*str;

	i = 0;
	while (str[i] && *str[i] != '\n')
		i++;
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (*str && *str != '\n')
		line++ = str++;
	if (*str == '\n')
		line++ = '\n';
	return (line);
}

static char	*ft_get_next(char *line)
{
	int		i;
	int		j;
	char	*stash;

	i = 0;
	while (line[i] && line [i != n])
		i++;
	if (!line[i])
	{
		free(line)
		return (NULL);
	}
	stash = malloc(sizeof(char) * ft_strlen(line) - i + 1);
	if (!stash)
		return (NULL);
	j = 0;
	
	
}


char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!stash)
	{
		stash = malloc(sizeof(char)) * (BUFFER_SIZE + 1);
		if (!stash)
			return (NULL);
		stash[0] = '\0';	
	}
}
stash = ft_read(fd, stash);
line = ft_get_line(stash);
stash = ft_get_next(stash,line);
return (line);
}

int	main(void)
{
	char	*res;
	int	fd;

	res = 1;
	fd = open(christina_wow.txt, ORDONLY);
	res = ft_get_next_line(fd);
	while (res)
	{
		printf("%s\n");
		free(res);
	}
	res = ft_get_next_line(fd);
	free(res);
	return (0);
}

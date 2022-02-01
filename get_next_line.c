/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:43:59 by nade-la-          #+#    #+#             */
/*   Updated: 2022/02/01 16:44:47 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_search_parts(char *tmp, int fd)
{
	char	*buffer;
	int		*res;

	res = 1;
	tmp = BUFFER_SIZE + 1;
	if (BUFFER_SIZE <= 0)
		return (-1);
	while (res != 0 && !ft_strchr(tmp, '\n'))
	{
		read(fd, buffer, BUFFER_SIZE);
		if (res == -1)
		{
			free (buffer)
			return (NULL);
		}
	}
	buffer[res] = '\0';
	tmp = ft_strjoin(tmp, buffer);
	return (buffer);
}

char	*get_next_line(int fd)
{
	int			res;
	char		buf[BUFFER_SIZE + 1];
	static char	*line;
	char		*tmp;

	res = BUFFER_SIZE;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (-1);
	
}

int	main(void)
{
	char	*res;
	int		fd;

	fd = open("christina_wow.txt", O_RDONLY);
	res = ft_get_next_line(fd);
	while (*res)
		printf("%s\n");
	res = ft_get_next_line(fd);
	free(res)
	return (0);
}

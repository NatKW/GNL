/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:43:59 by nade-la-          #+#    #+#             */
/*   Updated: 2022/01/31 18:23:39 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_search(char *temp, int fd)
{
	char	*buf;
	int		*ret;

	ret = 1;
	temp = BUFFER_SIZE + 1;
	if (BUFFER_SIZE <= 0)
		return (-1);
	while (ret != 0 && !ft_strchr(temp, '\n'))
	{
		read(fd, buf, BUFFER_SIZE);
		if (ret == -1)
		{
			free (buf)
			return (NULL);
		}
	}
	buf[ret] = '\0';
	temp = ft_strjoin(temp, buf);
	return (buf);
}

char	*get_next_line(int fd)
{
	int			ret;
	char		buf[BUFFER_SIZE + 1];
	static char	*line;
	char		*temp;

	ret = BUFFER_SIZE;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (-1);
}

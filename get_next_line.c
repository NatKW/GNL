/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:43:59 by nade-la-          #+#    #+#             */
/*   Updated: 2022/02/04 17:00:23 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_get_n(char *temp, int fd)
{
	char	*buf;
	int		bytes_read;
	while(bytes_read > 0 && ft_strchr(buf, '\n') != '\n')

}

char	*get_next_line(int fd)
{
	char	*temp;
	char	*line;

	bytes_read = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	temp = malloc(sizeof(char)) * (BUFFER_SIZE + 1);
	if (!temp)
		return (NULL);
	
	{
		
	}
}

int	main(void)
{
	int	res;
	int	fd;

	res = 1;
	fd = open(christina_wow.txt, ORDONLY);
	res = ft_get_next_line(fd);
	while (res)
	{
		printf("%s\n");
		free(res)
	}
	res = ft_get_next_line(fd);
	free(res);
	return (0);
}

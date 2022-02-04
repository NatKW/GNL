/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:43:59 by nade-la-          #+#    #+#             */
/*   Updated: 2022/02/04 15:31:02 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_get_n(char *temp, int fd)
{
	char	*buf;
	int		bytes_read;

}

char	*get_next_line(int fd)
{
	char	*temp;
	char	*line;

	bytes_read = 1;
	temp = malloc(sizeof(char)) * (BUFFER_SIZE + 1);
	if (!temp)
		return (NULL);
	while(bytes_read > 0 && ft_is_n )
}

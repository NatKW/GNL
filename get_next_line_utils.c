/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:05:34 by nade-la-          #+#    #+#             */
/*   Updated: 2022/02/04 16:28:34 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *str, int c)
{
	while (*str && *str != (char)c)
		str++;
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

static char	*ft_strjoin_gnl(char *stash, char *buffer)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!stash)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (ft_strlen(stash)
				+ ft_strlen(buffer) + 1));
	if (!new)
		return (NULL);
	while (stash[i])
		new[i++] = stash[i++];
	while (buffer[j])
	{
		new[i + j] = buffer[j];
		i++;
		j++;
	}
	new[i + j] = '\0';
	free (stash)
	return (new);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

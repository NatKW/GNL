/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:05:34 by nade-la-          #+#    #+#             */
/*   Updated: 2022/02/09 18:00:30 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != (char)c)
		str++;
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

char	*ft_strjoin_gnl(char *stash, char *buf)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new = malloc(sizeof(char) * (ft_strlen(stash)
				+ ft_strlen(buf) + 1));
	if (!new)
		return (NULL);
	while (stash[i])
	{
		new[i] = stash[i];
		i++;
	}
	while (buf[j])
	{
		new[i + j] = buf[j];
		i++;
		j++;
	}
	new[i + j] = '\0';
	free (stash);
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

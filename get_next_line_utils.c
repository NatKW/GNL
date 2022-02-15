/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:05:34 by nade-la-          #+#    #+#             */
/*   Updated: 2022/02/15 17:04:35 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strchr_gnl(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (1);
		i++;
	}	
	return (0);
}

char	*ft_strdup(const char *s1)
{
	char	*dst;
	char	*ptr;

	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (dst == NULL)
		return (NULL);
	ptr = dst;
	while (*s1)
		*dst++ = *s1++;
	*dst = '\0';
	return (ptr);
}

char	*ft_strjoin_gnl(char *stash, char *buf)
{
	char	*new;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (!stash)
		stash = ft_strdup("");
	new = malloc(sizeof(char) * (ft_strlen(stash) + ft_strlen(buf) + 1));
	if (!new)
		return (NULL);
	while (stash[++i])
		new[i] = stash[i];
	while (buf[++j])
		new[i + j] = buf[j];
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

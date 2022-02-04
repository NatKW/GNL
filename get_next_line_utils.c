/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:05:34 by nade-la-          #+#    #+#             */
/*   Updated: 2022/02/04 15:23:46 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	char	*ptr;

	dst = (char *) malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (dst == NULL)
		return (NULL);
	ptr = dst;
	while (*s1)
		*dst++ = *s1++;
	*dst = '\0';
	return (ptr);
}

char	*ft_strchr(char *str, int c)
{
	while (*str && *str != (char)c)
		str++;
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
/* modified */
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	while (s1[i])
		new[i++] = s1[i++];
	while (s2[j])
	{
		new[i + j] = s2[i];
		i++;
		j++;
	}
	new[i + j] = '\0';
	free (s1)
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

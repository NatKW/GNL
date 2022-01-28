/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:05:34 by nade-la-          #+#    #+#             */
/*   Updated: 2022/01/28 12:11:52 by nade-la-         ###   ########.fr       */
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

char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != (char)c)
		str++;
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	len_new;

	if (!s1 || !s2)
		return (NULL);
	len_new = (ft_strlen(s1) + ft_strlen(s2) + 1);
	new = (char *)ft_calloc(sizeof(char), len_new);
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, s1, ft_strlen(s1));
	ft_strlcat(new, s2, len_new);
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

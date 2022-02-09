/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:37:54 by nade-la-          #+#    #+#             */
/*   Updated: 2022/02/09 16:41:01 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5

# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);

static char		*ft_get_line(char *line);
static char		*ft_read(char *stash, int fd);
static char		*ft_get_next(char *stash, char *line);
static char		*ft_strjoin_gnl(char *stash, char *buf);

size_t	ft_strlen(const char *str);

#endif

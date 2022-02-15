/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:37:54 by nade-la-          #+#    #+#             */
/*   Updated: 2022/02/15 16:19:23 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5

# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 256

# endif

# ifndef INT_MAX
#  define INT_MAX 2147483647

# endif

char	*get_next_line(int fd);
char	*ft_strdup(const char *s1);
char	*ft_strjoin_gnl(char *stash, char *buf);

int		ft_strchr_gnl(char *str, int c);

size_t	ft_strlen(const char *str);

#endif

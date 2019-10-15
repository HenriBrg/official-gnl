/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:11:51 by hberger           #+#    #+#             */
/*   Updated: 2019/10/15 16:35:40 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

int			get_next_line(int fd, char **line);
size_t		ft_strlen(const char *str);
char		*ft_strchr(const char *s, int c);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strcat(char *dest, const char *src);
char		*ft_strnew(size_t size);

#endif

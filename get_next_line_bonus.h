/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:55:29 by odguigou          #+#    #+#             */
/*   Updated: 2024/02/17 13:58:49 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

# ifndef BUFFER_SIZE 
#  define BUFFER_SIZE 8
# endif

char	*get_next_line(int fd);
char	*ft_read_buffer_loop(int fd, char *left_str);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *str1, char *str2);
size_t	ft_strlen(char *str);
char	*ft_get_line_before_nwline(char *left_str);
char	*ft_get_line_after_nwline(char *left_str);

#endif

#include <stddef.h>

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE 
#define BUFFER_SIZE 10
#endif

size_t  ft_strlen(char *str);
char    *ft_strjoin(char *str1, char *str2);
char    *ft_strchr(char *str, int c);
char    *ft_get_line_before_nwline(char *left_str);
char    *ft_get_line_after_nwline(char *left_str);




#endif
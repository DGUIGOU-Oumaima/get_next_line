#include "get_next_line.h"

char    ft_read_buffer_loop(int fd, char *left_str)
{
    
}

char    get_next_line(int fd){
    char    *the_line;
    static char    *left_str;

    if(fd<0 || BUFFER_SIZE <= 0)
        return (NULL);
    left_str = ft_read_buffer_loop(fd, left_str);
    if(!left_str)
        return (NULL);
    the_line = ft_get_line_before_nwline(left_str);
    left_str = ft_get_line_after_nwline(left_str);
    return (the_line);

}
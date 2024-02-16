#include "get_next_line.h"

size_t  ft_strlen(char *str)
{
    size_t i;

    i = 0;
    if (!str)
        return (0);
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strjoin(char *str1, char *str2)
{
    size_t i;
    size_t j;

    // i = 0;
    // j = ft_strlen(str1);
    // if (!str1)
    //     return (str2);
    // if (!str1)
    //     return (str2);
    // while (str2[i] != '\0')
    // {
    //     str1[j++] = str2[i++];
    // }
    // str1[j] = '\0';
    // return (str1);
}

char    *ft_strchr(char *str, int c)
{
    int i;

    i = 0;
    if(!str)
        return (NULL);
    if(c == '\0')
        return ((char *)&str[ft_strlen(str)]);
    while (str[i] != '\0')
	{
		if (str[i] == (char) c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

char    *ft_get_line_before_nwline(char *left_str)
{
    int		i;
	char	*str;

	i = 0;
    if(!left_str[i])
        return (NULL);
    while(left_str[i] && left_str[i] != '\n')
        i++;
    str = (char *)malloc(sizeof(char) * (i + 2));
    if(!str)
        return (NULL);
    i = 0;
    while(left_str[i] && left_str[i] != '\n')
    {
        str[i] = left_str[i];
        i++;
    }
    if (left_str[i] == '\n')
	{
		str[i] = left_str[i];
		i++;
	}
    str[i] = '\0';
    return (str);
}

char    *ft_get_line_after_nwline(char *left_str)
{
    int     i;
    int     j;    
	char    *str;

	i = 0;
    if(!left_str[i])
        return (NULL);
    while(left_str[i] && left_str[i] != '\n')
        i++;
    str = (char *)malloc(sizeof(char) * (ft_strlen(left_str) - i + 1));
    if(!str)
        return (NULL);
    i++; //pourquoi i++
    j = 0;
    while (left_str[i])
    {
        str[j++] = left_str[i++];
    }
    str[j] = '\0';
    free(left_str); //pourquoi ce free
    return (str);
}
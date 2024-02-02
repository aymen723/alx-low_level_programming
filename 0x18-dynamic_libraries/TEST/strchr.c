#include "main.h"

char *_strchr(char *s, char c)
{

    do
    {
        if (*s == c)
            return ((char *)s);
    } while (*s++);

    return (0);
}

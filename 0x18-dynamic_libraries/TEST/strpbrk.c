#include "main.h"
#include <stdlib.h>

char *_strpbrk(char *s, char *accept)
{
    int i = 0;
    int j = 0;

    for (i = 0; s[i]; i++)
    {
        for (j = 0; accept[j]; j++)
            if (*(accept + j) == s[i])
                return (&(s[i]));
    }
    return (NULL);
}

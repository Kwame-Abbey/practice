#include "main.h"

/**
* create_array - creates an array of chars
* @size: sixe of array
* @c: specific character
*/

char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *ptr;

    if (size == 0)
    {
        return (NULL);
    }

    ptr = malloc((size + 1) * sizeof(char));
    if (ptr == NULL)
        return (NULL);
    
    for (i = 0; i < size; i++)
        *(ptr + i) = c;

    return (ptr);
}
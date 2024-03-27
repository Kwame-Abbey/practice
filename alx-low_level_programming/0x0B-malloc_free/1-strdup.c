#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: pointer to newly allocated space
 */

char *_strdup(char *str)
{
	char *ptr;
	int len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, str);

	return (ptr);
}

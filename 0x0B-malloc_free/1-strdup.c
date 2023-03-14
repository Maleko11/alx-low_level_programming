#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: the input string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL if insufficient
 *         memory was available or if str is NULL
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	char new_str = malloc(strlen(str) + 1); / allocate memory for new string */
	if (new_str == NULL)
	{
		return (NULL); /* insufficient memory available */
	}

	strcpy(new_str, str); /* copy string to newly allocated memory */
	return (new_str); /* return pointer to duplicated string */
}

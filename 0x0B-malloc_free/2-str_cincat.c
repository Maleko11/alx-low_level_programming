#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: a pointer to the concatenated string, or NULL if insufficient
 *         memory was available or if s1 and s2 are both NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	size_t s1_len = 0, s2_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	concat_str = malloc(s1_len + s2_len + 1);
	if (concat_str == NULL)
		return (NULL);

	strcpy(concat_str, s1);
	strcpy(concat_str + s1_len, s2);
	return (concat_str);
}

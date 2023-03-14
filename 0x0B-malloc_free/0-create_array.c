#include <stdlib.h>

/**
*create_array - initializes the array
*@arr - is value being returned
*@size: this is the size
*@c:This is the string
*/

char *create_array(unsigned int size, char c)
{
char *arr = (char *) malloc(size * sizeof(char));
unsigned int i;
if (size == 0)
{
return NULL;
}


if (arr == 0)
{
return NULL;
}

for (i = 0; i < size; i++)
{
arr[i] = c;
}

return arr;

}

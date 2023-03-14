#include <stdlib.h>

/**
*arr - initializes the array
*@size:
*@c:
*/

char *create_array(unsigned int size, char c)
{
char *arr = (char*) malloc(size * sizeof(char));
if(size == 0)
{
return NULL;
}


if(arr == 0)
{
return NULL;
}

for(unsigned int i = 0; i < size; i++)
{
arr[i]=c;
}

return arr;

}

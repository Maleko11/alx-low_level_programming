#include <stdlib.h>

/**
*arr - initializes the array
*@size:
*@c:
*/

char *create_array(unsigned int size, char c)
{
if(size == NULL)
{
return 0;
}
char *arr = (char*) malloc(size * sizeof(char));

if(arr == NULL){
return 0;
}

for(unsigned int i = 0; i < size; i++)
{
arr[i]=c;
}

return arr;

}

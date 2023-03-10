#include <stdio.h>
#include <libgen.h>

/**
*main - prints the number of arguments it recieves
*@argc: contains number of arguments
*@artgv: contain the list of arguments
*/
int main(int argc, char *argv[])
{
    for(int i = 0; i <= argc; i++)
    {
        printf("%s\n", argv[i]);
    }
return 0;
}

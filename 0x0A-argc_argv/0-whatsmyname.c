#inclide <stdio.h>
#include <libgen.h>

/**
*main - write the name of the program
*@argc: contains number of arguments
*@artgv: contain the list of arguments
*/
int main(int argc, char *argv[])
{
printf("%s\n", basename(argv[0]));
return 0;
}
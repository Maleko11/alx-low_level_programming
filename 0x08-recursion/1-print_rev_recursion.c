#include <stdio.h>
#include <string.h>

/**
*_print_rev_recursion - prints char in revers
*@s: is a stirng input to be printed backwards
*/
void _print_rev_recursion(char *s)
{

int len = strlen(s);
int i = len -1;
for(i ; i >= 0; i--)
{
    printf("%c",s[i]);
}
printf("\n");
}


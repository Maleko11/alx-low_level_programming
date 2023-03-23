#include <stdio.h>
#inclide <stdarg.h>

/**
*print_numbers: prints
*@separator: charactor
*@n: number of paremeters
*
**/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	unsigned int i;
	
	for(i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		
		if (i < n -1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - prints string followed by a new line
* @separator - string to be printed between the strings
* @n - number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i;
char *str;

if (n > 0)
{
va_start(arg, n);
for (i = 1; i <= n; i++)
{
str = va_arg(arg, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (i != n && separator != NULL)
printf("%s", separator);
}
va_end(arg);
}
printf("\n");
}

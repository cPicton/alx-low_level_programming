#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers,followed by a new line
* @separator: string to be printed between numbers
* @n: amount of arguments in list
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ptr;
unsigned int i;

if (n > 0)
{
va_start(ptr, n);
for (i = 1; i <= n; i++)
{
printf("%d", va_arg(ptr, int));
if (i != n && separator != NULL)
printf("%s", separator);
}
va_end(ptr);
}
printf("\n");
}

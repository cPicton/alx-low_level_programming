#include "function_pointers.h"

/**
* print_name - prints a name
* @name: parameter that the  function pointer needs
* @f:function to execute
*
*/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}

}

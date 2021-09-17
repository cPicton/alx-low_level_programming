#include <stdio.h>
#include "main.h"

/**
* main - print each argument passed to program on a line
* @argc: argument counter
* @argv: pointer to array of arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
int counter;
for(counter=0; counter<argc; counter++)
printf("argv[%2d]: %s\n",counter,argv[counter]);

return 0;
}
}

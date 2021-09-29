#include "3-calc.h"
/**
* main - checks arguments.
* @argc: argument count.
* @argv: argument vector.
*
* Return: error if number of arguments is wrong.
*/
int main(int argc, char *argv[])
{
int a = 0, b = 0, c = 0;
char p;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}

p = argv[2][0];
if (p != '+' && p != '-' && p != '/' && p != '*' && p != '%')
{
printf("Error\n");
exit(99);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
c = (get_op_func(argv[2]))(a, b);
printf("%d\n", c);
return (0);
}

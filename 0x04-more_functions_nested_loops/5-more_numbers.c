#include <stdio.h>
#include "main.h"
/**
* more_numbers -  checks for checks for a digit (0 through 9).
* Return: Always 0.
*/
void more_numbers(void)
{
int n1, n2;
for (n1 = 0; n1 < 10; n1++)
{
for (n2 = 0; n2 < 15; n2++)
{
if (n2 / 10 != 0)
{
_putchar(n2 / 10 + '0');
}
_putchar(n2 % 10 + '0');
}
_putchar(10);
}
}

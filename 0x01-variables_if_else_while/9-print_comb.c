#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints all possible different combinations of two digits.
 * Numbers must be separated by ", " followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function (every other function is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i == 9)
putchar(i + '0');
else
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
}
return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main - prints the last digit of n and prints out weather it is
* greater than 5,0,or less than 6
* Return: 0
*/
int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
printf("Last digit of %i is %i and is\n", n, lastDigit);
if (lastDigit > 5)
printf("greater than 5\n");
else if (lastDigit == 0)
printf("0\n");
else
printf("less than 6 and not 0\n");
/* your code goes there */
return (0);
}

#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 1)
{
printf("%dpositive\n", n);
}
else if (n < 1)
{
printf("%dnegative\n", n);
}
else
{
printf("%d0 is zero\n", n);
}
return (0);
}

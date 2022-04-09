#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description - Prints a number and its last digit along with whether its
 * its last digit is 0, greater than 5, or less than 6 and not 0.
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
int last_digit;

srand (time(0));
n = rand() - RAND_MAX / 2
last digit = n % 10
  if (last digit == 10)
    {
     printf("Last digit of %d is 0 and is 0\n", n);
    }
  else
    {

     if (last_digit > 5)
       {
	printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
       }
     else
       {
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
       }
    }
 return (0);

#include <stdio.h>                                #include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and print the
number
* and if it is positive, negative or zero
* Return: 0;
*/
                                                   int main(void)
 {
         int n;

         srand(time(0));                                   n = rand() - RAND_MAX / 2;
 last n = % 10;
 if (last > 10)
	 printf("last digit of %i is %i and is greater than 5\n", n, last);
 else if (last == 0)
	 printf("last digit of %i is %i and  is 0\n", n, last);
 else if (last < 6)
	 printf("last digit of%i is %i and is less than 6 and not 0\n", n, last)
		 return 0;
 }
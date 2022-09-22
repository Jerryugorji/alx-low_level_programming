@@ -1, 17 + 1, 10 @@
/*
* File: 0-positive_or_negative.c
 * Auth: Brennan D Baraban
 **/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints a random number and states whether
 *        it is positive, negative, or zero.
* main - Entry point
 *
* Return: Always 0 (Success)
*/
int main(void)
{
@@ -22, 10 + 15, 10 @@ int main(void)
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}

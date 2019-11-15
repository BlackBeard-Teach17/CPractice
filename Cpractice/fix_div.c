#include <stdio.h>

/*
 * Why is an incorrect result printed ?
 */

float result; /* Result of the divide */

int main()
{
	result = 7.0 / 22.0;

	printf("The result is %d\n", result);
	return (0);
}

#include <stdio.h>

/*
 * Why is the result of the program below 0.0? What must be done
 * to fix this program?
 */

float answer; //Results of our calculation

int main()
{
	answer = 1 / 3;
	printf("The value of 1/3 is %f\n", answer);
	return (0);
}

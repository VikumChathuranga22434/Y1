/*This program calculates the sum of two integer values that input from the keyboard*/

#include <stdio.h>

int main()
{
	int num1, num2, sum;
	
	printf("Enter 1st Number:");
	scanf("%d", &num1 );
	
	printf("Enter 2nd Number:");
	scanf("%d", &num2);
	
	sum = num1 + num2;
	
	printf("SUmmation of these two numbers: %d", sum);
	
	return 0;
}

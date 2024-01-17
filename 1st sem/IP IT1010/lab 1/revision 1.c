#include <stdio.h>

int add(int n1, int n2); // declairing add function
int digit();

int main()
{
/*	//input two number and add them together
	
	int first_number, second_number; // declairing two integers
	
	//input two numbers
	printf ("Enter ur first number : ");
	scanf  ("%d", &first_number);
	
	printf ("Enter ur second number : ");
	scanf  ("%d", &second_number);
	
	int sum;
	
	sum = add(first_number, second_number); // call add function
	
	printf ("sum = %d\n", sum);
	return 0;*/
	
	/*int num, digit1, digit2, digit3, digit4, digit5;
	
	printf("Enter a five-digit number: ");
	scanf("%d", &num);

	digit1 = num / 10000;
	digit2 = (num / 1000) % 10;
	digit3 = (num / 100) % 10;
	digit4 = (num / 10) % 10;
	digit5 = num % 10;

	printf("Individual digits: %d %d %d %d %d", digit1, digit2, digit3, digit4, digit5);*/

	digit();
	
	return 0;

}

int add(int n1, int n2) // functioning the add function
{
	int total;
		
	total = n1 + n2; // add two numbers
	
	return total; // return the value
}

int digit()
{
	int num, digit1, digit2, digit3, digit4, digit5;
	
	printf("Enter a five-digit number: ");
	scanf("%d", &num);

	digit1 = num / 10000;
	digit2 = (num / 1000) % 10;
	digit3 = (num / 100) % 10;
	digit4 = (num / 10) % 10;
	digit5 = num % 10;

	printf("Individual digits: %d %d %d %d %d", digit1, digit2, digit3, digit4, digit5);
	
	//return 0;

}

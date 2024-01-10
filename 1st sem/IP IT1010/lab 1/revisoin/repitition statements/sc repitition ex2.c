#include <stdio.h>

//calculate average while input 9999 to terminate the program

int main ()
{
	//Declaring variables
	int counter = 0, total = 0, x;
	float avg;
	
	printf ("Enter grade (9999 to exit) : ");
	scanf  ("%d", &x);
	
	while (x != 9999)
	{
		total += x;
		++counter;
		
		printf ("Enter grade (9999 to exit) : ");
		scanf  ("%d", &x);
		
	}
	
	avg = (float) total / counter;
	
	printf ("Average of integers is = %.2f", avg);
	
	return 0;
}

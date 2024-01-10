#include <stdio.h>

int main()
{
	//declaring variables
	int total, number, counter;
	float average;
	
	total = 0;
	counter = 0;
	
	//Get number from user
	printf ("Enter number :");
	scanf  ("%d", &number);
	
	while(number != 9999)
	{
		total = total + number;
		counter = counter + 1;
		
		printf ("Enter number :");
		scanf  ("%d", &number);
		
	}//end while
	
	average = (float)total / counter;
	
	printf ("Average of numbers is %.2f", average);
	
	int x;
	
	for (x = 3; x < 25; x += 5)
	{
		printf ("%d", x);
	}
	
	return 0;
}//end main funtion

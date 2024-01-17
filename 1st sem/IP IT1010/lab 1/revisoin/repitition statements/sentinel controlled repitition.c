#include <stdio.h>

//display Average of several integers while input -1 terminate the program

int main()
{
	//Declaring valriables
	int counter = 0;
	int total = 0;
	int grade;
	float average;
	
	//get first input by user
	printf ("Enter grade (-1 to end) : ");
	scanf  ("%d", &grade);
	
	while (grade != -1)//start a while loop
	{
		total += grade;
		counter += 1;
		
		printf ("Enter grade (-1 to end) : ");
		scanf  ("%d", &grade);
		
	/*	total += grade;
		counter += 1;*/
		
	}// end while loop
	
	average = (float) total / counter; // Calculate average
	
	printf ("Class Average is = %.2f", average); // Display Average
	
	return 0;
}//End of main function

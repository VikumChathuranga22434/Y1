#include <stdio.h>

// class average programme with couneter controll repitition

int main ()
{
	//declaring variables
	int counter = 1;
	int grade, total = 0;
	float average = 0;
	
	while (counter <= 10)// start a while loop
	{
		printf ("Enter grade : ");// assuming variables
		scanf  ("%d", &grade);
		//++counter;// increment
		
		total += grade; // calculate total
		counter += 1;
		
	}
	
	average = (float) total / 10.0; //calculate average
	
	printf ("Class average is = %.2f", average); // display average
	
	return 0;
}

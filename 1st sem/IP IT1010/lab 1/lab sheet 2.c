//using if statement 
#include <stdio.h>

int main ()
{
	int no1, no2; 
	printf ("%s", "Enter two integers :");
	scanf  ("%d %d", &no1, &no2); //adding two integers 
	
	if (no1 == no2) // this row checking equal
		printf ("%d is equal to %d\n", no1, no2);
	
	if (no1 != no2) //this row checking not equal
		printf ("%d is not equal to %d\n", no1, no2);
	
//the following program display largest number among two integers 
	int num1, num2;
	printf ("%s", "Enter two integer values :");
	scanf  ("%d %d", &num1, &num2); // assuming values for funtions
	
	printf ("%d is your first number.\n", num1);
	printf ("%d is your second number.\n", num2);
	
	if (num1 < num2) // checking what is the largest number is
		printf ("%d is the largest number among this two integers.\n", num2);
	
	if (num1 > num2) // checking what is the largest number is 
		printf ("%d is the largest number among this two integers.\n", num1);

//printing pass or fail using if ... else statment 
	
	int mark;
		printf ("%s", "Enter your mark :");
		scanf  ("%d", &mark);
		
	if (mark >= 60) //check mark equal or greater than 60
	{
		printf ("%s", "passed\n");
	}
	else 
	{
		printf ("%s", "failed\n");
		printf ("you must take this again.\n");
	}
	mark >= 60 ? printf ("passed\n") : printf ("failed\n"); //we can use this statement as if ... else statement 
	
	return 0;
}// end of main funtion

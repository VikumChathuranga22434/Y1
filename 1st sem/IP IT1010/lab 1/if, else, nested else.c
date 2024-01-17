//this program displays the else statement 
#include <stdio.h>
int main()/*
{
	int x, y, z;
	
	//assuming values for the variables
	printf ("Enter your first angle :");
	scanf  ("%d", &x);
	
	printf ("Enter your second angle :");
	scanf  ("%d", &y);
	
	printf ("Enter your third angle :");
	scanf  ("%d", &z);
	
	//calculation
	int sum;
	sum = x + y + z;
	
	if (sum == 180)
	{
		printf ("You are available for the draw a triangle");
	}//end of if
	
	else 
	{
		printf ("You have check your angles.\n");
		printf ("Invalid angles\n");
	}//end of else
	
}//end of main funtion*/

{
	int mark;
	
		printf("%s", "Enter marks : ");
		scanf("%d", &mark); // read marks
		
			if ( mark >= 80 )
			
				printf( "%s", "Grade A" );
			
			else if ( mark >= 50 )
			
				printf(  "%s", "Grade B" );
			
			else if ( mark >= 40 )
			
				printf( "%s", "Grade C" );
			
			else
			
				printf( "%s", "Grade f" );
	return 0;
}

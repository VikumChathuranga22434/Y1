// printing grade using nested if...else statement 
#include <stdio.h>
int main()
{
	int mark1;
		printf ("%s", "Enter your examination mark here :");
		scanf  ("%d", &mark1); // assuming value for the segment
		 
	if (mark1 >= 80)
		printf ("%s", "Grade A");
	else if (mark1 >= 50)
		printf ("%s", "Grade B");
	else if (mark1 >= 40)
		printf ("%s", "Grade C");
	else 
		printf ("%s", "Grade S");
	
	return 0;
}

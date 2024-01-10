#include <stdio.h>

int main()
{
	//declaring variables
	int i, j;
	
	for (i = 1; i <= 5; ++i)//start loop for print rows
	{
		for (j = 5; j >= i; --j)//start loop for print columns
		{
			printf ("%c", i + 96);
		}//end for loop 
		
		puts ("");
		
	}//end for loop
	
	return 0;
}

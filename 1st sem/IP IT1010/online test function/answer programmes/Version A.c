#include <stdio.h>

int main()
{
	//declaring variables
	char a;
	int i, j;
	
	for (i = 1; i <= 5; ++i)// for loop 1
	{
		for (j = 1; j <= i; ++j)//for loop 2
		{
			printf ("%c", i + 96);
		}//end for loop 2
		
		puts("");
	}//end for loop 1
	
	return 0;
}

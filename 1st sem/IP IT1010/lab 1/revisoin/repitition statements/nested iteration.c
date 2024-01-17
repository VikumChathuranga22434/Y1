#include <stdio.h>

//nested iteration

int main ()
{
	int i, j;
	
	for (i = 1; i <= 5; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf ("*");
		}
		
		printf ("\n");
	}	
	
	return 0;
}

/*int main ()
{
	int i, j;
	
	for (i = 1; i <= 5; ++i)
	{
		for (j = 1; j <= 5; ++j)
		{
			printf ("*");
			//++j;
		}
		
		printf ("\n");
	}	
	
	return 0;
}*/

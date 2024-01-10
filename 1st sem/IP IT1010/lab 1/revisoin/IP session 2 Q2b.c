#include <stdio.h>

int main()
{
	int i, j, image[4][4];
	
	for (i=0; i<4; ++i)
	{
		printf ("Value for row %d\n", i+1);
		
		for (j=0; j<4; ++j)
		{
			printf ("\tEnter element %d : ", j+1);
			scanf  ("%d", &image[i][j]);
		}
		
		printf ("\n");
	}
	
	int tempArr[4][4];
	
	for (i=0; i<4; ++i)
	{
		for (j=0; j<4; ++j)
		{
			printf ("%d\t", image[i][j]);
			
			if (image[i][j] > 55)
			{
				tempArr[i][j] = 1;
			}
			
			else 
			{
				tempArr[i][j] = 0;
			}
		}
		
		printf ("\n");
	}
	
	printf ("\n");
	
	for (i=0; i<4; ++i)
	{
		for (j=0; j<4; ++j)
		{
			printf ("%d\t", tempArr[i][j]);
		}
		
		printf ("\n");
	}
	
	
	
	return 0;
}

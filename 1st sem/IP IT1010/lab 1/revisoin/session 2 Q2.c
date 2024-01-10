#include <stdio.h>
#include <assert.h>

int main ()
{
	int i, j, userRating[5] = {0}, usrRating;
	
	do 
	{
		printf ("Enter number of rating : ");
		scanf ("%d", &usrRating);
		
		if (usrRating == -99)
		{
			break;
		}
		
		assert (usrRating >= 1 && usrRating <=5);
		
		switch (usrRating)
		{
			case 1 : userRating[0] += 1;
						break;
						
			case 2 : userRating[1] += 1;
						break;
						
			case 3 : userRating[2] += 1;
						break;
						
			case 4 : userRating[3] += 1;
						break;
						
			default : userRating[4] += 1;
						break;
		}
			
	}while(1);
	
	printf ("\n");
	
	for (i=0; i<5; ++i)
	{
		printf ("%d\t", i+1);
		
		for (j=0; j<userRating[i]; ++j)
		{
			printf ("*");
		}
		
		printf ("\n");
	}
	
	return 0;
}

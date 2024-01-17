#include <stdio.h>
#include <math.h>

int main(void)
{
	int square[4][2];
	
	int i,j;
	for(i=0; i<4;i++)
	{
		int sqrd = pow(i+1,2);
		square[i][0] = i+1;
		square[i][1] = sqrd;
	}
	
	for(i = 0 ; i<4; i++)
	{
		for(j =0 ; j<2; j++)
		{
			printf("%d\t",square[i][j]);
		}
		
		printf("\n");
		
	}
}

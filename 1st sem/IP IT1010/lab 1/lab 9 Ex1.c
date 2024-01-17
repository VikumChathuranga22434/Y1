#include <stdio.h>

int main ()
{
	int i;
	int numbers[5];
	
	for (i = 0; i < 5; ++i)
	{
		printf ("Enter integers : ");
		scanf  ("%d", &numbers[i]);
	}
	
	FILE * cfPtr;
	
	cfPtr = fopen ("numbers.txt", "w");
	
	if (cfPtr == NULL)
	{
		printf ("cannot create file.\n");
		return -1;
	}
	
	for (i = 0; i < 5; ++i)
	{
		fprintf (cfPtr, "%d\t", numbers[i]);
	}
	
	fclose (cfPtr);
	
	return 0;
}

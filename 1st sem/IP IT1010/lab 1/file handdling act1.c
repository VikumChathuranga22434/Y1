#include <stdio.h>

int main ()
{
	int ID, i;
	char name[30];
	float average;
	
	for (i = 1; i <= 5; ++i)
	{
		printf ("Enter ID : ");
		scanf  ("%d", &ID);
		
		printf ("Enter Your Name : ");
		scanf  ("%s", name);
		
		printf ("Enter your class average : ");
		scanf  ("%f", &average);
	}
	
	FILE * cfPtr;
	
	cfPtr = fopen ("marks.dat", "w");
	
	if (cfPtr == NULL)
	{
		printf ("Cannot create file.\n");
		return -1;
	}
	
	for (i = 1; i <= 5; ++i)
	{
		fprintf (cfPtr, "%d\n", ID);
		fprintf (cfPtr, "%s\n", name);
		fprintf (cfPtr, "%.f\n", average);
	}
		
	fclose (cfPtr);
	
	return 0;
}

#include <stdio.h>

int main ()
{
	int i, j;
	float data[12];
	
	char s[3];
	/*
	for (i = 0; i < 12; ++i)
	{
		printf ("Input the value : ");
		scanf  ("%f", &data[i]);
	}
	
	float max = data[0];
	
	for (i = 1; i < 12; ++i)
	{
		if (data[i] > max)
		{
			max = data[i];
		}
	}
	
	printf ("The maximum rainfall : %.2f\n", max);
	
	float min = data[0];
	
	for (i = 1; i < 12; ++i)
	{
		if (data[i] < min)
		{
			min = data[i];
		}
	}
	
	printf ("The minimum rainfall : %.2f\n", min);
	
	for (i = 0; i < 12; ++i)
	{
		printf ("%.2f\t", data[i]);
	}*/
	
	
	for (i = 0; i < 3; ++i)
	{
		printf ("Enter your character : ");
		scanf  (" %c", &s[i]);
	}
	
	printf ("%c\t", s[i]);
	
	return 0;
	
	
}

#include <stdio.h>

int main ()
{
	int i, j;
	float data[12];
	
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
	}
	
	return 0;
	
	
}

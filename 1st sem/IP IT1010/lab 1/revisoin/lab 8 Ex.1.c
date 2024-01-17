#include <stdio.h>

int main()
{
	int i, numbers[5];
	
	for (i = 0; i < 5; ++i)
	{
		printf ("Enter your integer : ");
		scanf  ("%d", &numbers[i]);
	}
	
	printf ("\n");
	
	for (i = 0; i < 5; ++i)
	{
		printf ("%d\t", numbers[i]);
	}
	
	return 0;
}

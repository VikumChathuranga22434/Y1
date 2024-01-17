#include <stdio.h>
#include <math.h>

int square(int y);

int main()
{
	int i, j;
	
	for (i = 1; i <= 10; ++i)
	{
		printf ("%d\n", square(i));
	}
	
	return 0;
}

int square(int y)
{
	return y * y;
}

#include <stdio.h>

int main ()
{
	int i, j, lines, even, odd;
	
	char c1, c2;
	
	printf ("Enter 1st character : ");
	c1 = getchar();
	
	printf ("Enter 2nd character : ");
	scanf  (" %c", &c2);
	
	printf ("Enter number of lines : ");
	scanf  ("%d", &lines);
	
	for (i = 1; i <= lines; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			if (j%2 == 0)
			{
				printf ("%c", c2);
			}
			
			else 
			{
				printf ("%c", c1);
			}
		}
		
		printf ("\n");
	}
	
	return 0;
}


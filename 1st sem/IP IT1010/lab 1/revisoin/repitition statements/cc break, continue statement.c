#include <stdio.h>

//break statement

/*int main ()
{
	int x = 1;
	
	while (x <= 10)
	{
		if (x == 5)
		{
			break;
		}
		
		printf ("%d", x);
		++x;
	}
	
	return 0;
}*/

int main()
{
	int y = 1;
	
	while (y <= 10)
	{
		if (y == 5)
		{
			++y;
			continue;
		}
		
		printf ("%d", y);
		++y;
	}
	
	return 0;
}

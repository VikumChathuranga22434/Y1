#include <stdio.h>
#include <string.h>

int main ()
{
	int x, i, j;
	int number, a[4];
	
	do
	{
		printf ("Enter your numbers : ");
	    scanf ("%d", &number);
	    
		if (number <= 9999 && number >= 1000)
		{
			for (i=0; i<4; ++i)
			{
				a[0] = number/1000;
				a[1] = (number/100)%10;
				a[2] = (number/10)%10;
				a[3] = (number/1)%10;
				
			}
			
			for (j=0; j<4; ++j)
			{
				if (!a[j] == a[3-j])
				{
					printf ("Invalid number.\n");
					return -1;
				}
			}
			
			printf ("It is a palindrome.\n");
			break;
		}
		
		else 
		{
			printf ("Invalid number.\n");
		}
		
	}while(number <= 9999 || number >= 1000);

	return 0;

}

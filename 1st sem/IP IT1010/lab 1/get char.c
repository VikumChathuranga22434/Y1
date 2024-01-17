#include <stdio.h>
int main()
{
	int grade;
	
	printf ("%s", "Enter grade :");
	grade = getchar();
	
	switch (grade)
	{
	case 'A': printf( "%s", "Excellent");
				break;
	case 'B': printf( "%s", "Good" );
				break;
	}
	
	printf ("The value of %c is %d.", 'a', 'a');
	return 0;
}

#include <stdio.h>
#include <assert.h>

char findGrade (float marks);
void testgrade ();

int main ()
{
	testgrade ();
	
	float marks;
	
	printf ("Enter your marks : ");
	scanf  ("%f", &marks);
	
	printf ("The grade you earned - %c", findGrade(marks));
	
	return 0;
}

char findGrade (float marks)
{
	if (marks <= 100 && marks >= 0)
	{
		if (marks >= 75 && marks <= 100)
		{
			return 'A';
		}
		
		else if (marks >= 65)
		{
			return 'B';
		}
		
		else if (marks >= 55)
		{
			return 'C';
		}
		
		else if (marks >= 35)
		{
			return 'S';
		}
		
		else 
		{
			return 'F';
		}
	}
	
	else 
	{
		printf ("Invalid Marks.\n");
	}
}

void testgrade ()
{
	assert(findGrade(10.0) == 'F');
	assert(findGrade(45.0) == 'S');
	assert(findGrade(60.0) == 'C');
	assert(findGrade(70.0) == 'B');
	assert(findGrade(85.0) == 'A');
	assert(findGrade(0.0) == 'F');
	assert(findGrade(100.0) == 'A');
	
	printf ("Test Passed.\n\n");
}

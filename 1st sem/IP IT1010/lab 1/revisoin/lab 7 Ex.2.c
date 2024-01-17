#include <stdio.h>
#include <assert.h>

float calMarks (float final_marks, float con_ass_marks);
void test_marks ();

int main ()
{
	float x, y;
	
	test_marks ();
	
	printf ("The marks earned for the final exam (out of 100) : ");
	scanf  ("%f", &x);
	
	printf ("The marks earned for the continuous assessments (out of 100) : ");
	scanf  ("%f", &y);
	
	if (x > 100 || x < 0 || y > 100 || y < 0)
	{
		printf ("Invalid Marks.\n");
	}
	
	else 
	{
		printf ("Your Final marks : %.2f.\n", calMarks(x, y));
	}
	
	return 0;
}

float calMarks (float final_marks, float con_ass_marks)
{
	float mark1, mark2, overallMarks;
	
	mark1 = final_marks * (60 / 100.0);
	mark2 = con_ass_marks * (40 / 100.0);
	
	overallMarks = mark1 + mark2;
	
	return overallMarks;	
}

void test_marks ()
{
	assert (calMarks(100, 100) == 100);
	assert (calMarks(0, 0) == 0);
	
	printf ("Test passed.\n\n--------------------------------------------------\n");
}


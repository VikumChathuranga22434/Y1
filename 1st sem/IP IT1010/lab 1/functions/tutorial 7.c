#include <stdio.h>
#include <assert.h>

//Exercise 1

int qualityPoints(int x);
void test_avg();

int main ()
{
	int avg;
	
	test_avg();
	
	printf ("Enter Average : ");
	scanf  ("%d", &avg);
	
	printf ("%d", qualityPoints(avg));
	
	return 0;
}

int qualityPoints(int x)
{
	int z;
	
	if (x >= 90 && x <= 100)
	{
		z = 4;
	}
	
	else if (x >= 80 && x <= 89)
	{
		z = 3;
	}
	
	else if (x >= 70 && x <= 79)
	{
		z = 2;
	}
	
	else if (x >= 60 && x <= 69)
	{
		z = 1;
	}
	
	else
	{
		z = 0;
	}
	
	return z;
}

void test_avg()
{
	assert (qualityPoints(100) == 4);
	assert (qualityPoints(89) == 3);
	assert (qualityPoints(79) == 2);
	assert (qualityPoints(69) == 1);
	assert (qualityPoints(59) == 0);
	
	//boundry checking
	
	assert (qualityPoints(90) == 4);
	assert (qualityPoints(80) == 3);
	assert (qualityPoints(70) == 2);
	assert (qualityPoints(60) == 1);
	assert (qualityPoints(0) == 0);
	assert (qualityPoints(110) == 0);
	
	printf ("qualityPoints() assteration passed.\n\n");
}

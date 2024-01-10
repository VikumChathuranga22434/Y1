#include <stdio.h>
float calBonus(float salary);

int main ()
{
	float sal, total_salary;
	
	printf ("Enter Your salary : ");
	scanf  ("%f", &sal);
	
	total_salary = sal + calBonus(sal);
	
	printf ("Final salary : %.2f", total_salary);
	
	return 0;
}

float calBonus (float salary)
{
	if (salary > 20000)
	{
		return salary * 2.0;
	}
	
	else 
	{
		return salary * 0.5;
	}
}

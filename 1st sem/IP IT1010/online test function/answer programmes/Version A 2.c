#include <stdio.h>

//Declaring functions
float calIncrement (float salary, int noofYearsWorked);//if mre than 2years increase salary 10%
float calcTotSalary (float salary, float increment);//total salary = salary + increment

int main()
{
	float x, a;
	int y;
	
	//get salary
	printf ("Enter Salary : ");
	scanf  ("%f", &x);
	
	//get worked years
	printf ("Enter no of years worked : ");
	scanf  ("%d", &y);
	
	a = calIncrement (x, y);//call function
	
	printf ("Increment : %.2f\n", calIncrement(x, y));//call function
	
	printf ("Total Salary : %.2f\n", calcTotSalary(x, a ));//call function
	
	
	
}

//implementation of functons
float calIncrement (float salary, int noofYearsWorked)
{
	float salary_increment;
	
	if (noofYearsWorked > 2)
	{
		salary_increment = salary * 10 / 100.0;
		
		calcTotSalary (salary, salary_increment);
		
		return salary_increment;
	}
	
	else
	{
		printf ("Your not qualfied to the salary increment.\n");
	}
}

float calcTotSalary (float salary, float increment)
{
	float total_salary = 0;
	
	total_salary = salary + increment;
	
	return total_salary;
}

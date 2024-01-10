#include <stdio.h>

//function decalration 
float calculateWeekSalary (int grade, float hrsWorked);
void printDetails (int grade, float hrsWorked, float salary);

int main()
{
	int x;
	float hrs, salary;
	
	printf ("Input grade : ");
	scanf  ("%d", &x);
	
	printf ("No of hours worked during the week : ");
	scanf  ("%f", &hrs);
	
	salary = calculateWeekSalary (x, hrs);
	
	printDetails (x, hrs, salary);
	
	return 0;	
}

float calculateWeekSalary (int grade, float hrsWorked)
{
	float Weekly_Salary;
	
	switch (grade)
	{
		case 1 : Weekly_Salary = hrsWorked * 100.0;
					break;
			
		case 2 : Weekly_Salary = hrsWorked * 200.0;
					break;
					
		case 3 : Weekly_Salary = hrsWorked * 300.0;
					break;
					
		default : printf ("Invalid grade.\n");
	}
	
	return 	Weekly_Salary;

}

void printDetails (int grade, float hrsWorked, float salary)
{
	printf ("Your Grade : %d\n", grade);
	printf ("Your worked hrs : %.2f\n", hrsWorked);
	printf ("Weekly Salary : %.2f\n", salary);
}

#include <stdio.h>

struct employee{
	int empNo;
	int age;
	char gender;
	double salary;
}emp1,emp2 ;

int main ()
{
	emp1.empNo = 123456;
	emp2.empNo = 456789;
	emp1.age   = 30;
	emp2.age   = 28;
	emp1.gender= 'M';
	emp2.gender= 'F';
	emp1.salary= 150000.25;
	emp2.salary= 149999.99;
	printf ("Employee 1 employee No	: %d\n", emp1.empNo);
	printf ("Employee 2 employee No	: %d\n", emp2.empNo);
	printf ("Employee 1 age		: %d\n", emp1.age);
	printf ("Employee 2 age		: %d\n", emp2.age);
	printf ("Employee 1 gender	: %c\n", emp1.gender);
	printf ("Employee 2 gender	: %c\n", emp2.gender); 		
	printf ("Employee 1 salary 	: %.2lf\n",emp1.salary);
	printf ("Employee 2 salary	: %.2lf\n",emp2.salary);
	
	return 0;
}

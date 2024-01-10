#include <stdio.h>

int main(void)
{
	float height;
		printf ("Enter your height (m) :");
		scanf  ("%f", &height);
		printf ("Your heigth is %.2f\n", height);
	
	char firstname[30];
		printf ("Enter your first name :");
		scanf  ("%s", firstname);
		printf ("Your first name is %s. Am I correct?", firstname);
	char answer[3];
		scanf  ("%s", answer);
		printf ("%s\n", answer);
	
	char secondname[30];
		printf ("Enter your second name :");
		scanf  ("%s", secondname);
		printf ("You have entered your second name %s.\n", secondname);
		printf ("So your full name is %s %s\n", firstname, secondname);
	int no1, no2;
	int sum;
		no1 = 25; //assign value to no1 variable
		no2 = 12; //assign value to no2 variable
		
		sum = no1 + no2; // add numbers
		printf ("sum is %d\n", sum); // print sum
		
	int no3, no4;	
		printf ("Enter first number : "); // prompt 
		scanf  ("%d", &no3); // read value
		
		printf ("Enter second number : "); // prompt
		scanf  ("%d", &no4); // read value 
		
		sum = no3 + no4; // assign total to sum 
		printf ("sum is %d\n", sum); // print sum
		
	return 0;
	
}

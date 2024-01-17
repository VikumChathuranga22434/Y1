/* how using scanf funtion and how enter to numbers for it*/
#include <stdio.h>
int main()
{
	double no1, no2; 
	double sum; 
	
	printf ("Enter first number :");
	scanf  ("%lf", &no1);
	
	printf ("Enter second number :");
	scanf  ("%lf", &no2);
	
	sum = no1 + no2; //add numbers 
	printf ("sum is %.2f\n", sum); //print sum
	 return 0;
}

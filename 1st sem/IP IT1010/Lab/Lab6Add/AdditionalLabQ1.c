#include <stdio.h>

int main()
{
	//variable declaration
	int pckg, Numper;
	float disc, lastamt, totamt;
	
	//gettung user inputs
	printf("Enter Your Package Type (1/2/3):");
	scanf("%d", &pckg);
	
	printf("Enter Number Of Person:");
	scanf("%d", &Numper);
	
	//else-if statement
	if (pckg == 1)
	{
		disc = (float) 8000 * 3/100;
		lastamt = (float) Numper * 8000;
		totamt = lastamt - disc;
		printf("Amount for Selected Package: %.2f \n", lastamt);
		printf("Discount for This Package: %.2f \n", disc);
		printf("Total cost with discount: %.2f", totamt);
	} 
	else if (pckg == 2)
	{
		disc = (float) 9500 * 5/100;
		lastamt = (float) Numper * 9500;
		totamt = lastamt - disc;
		printf("Amount for Selected Package: %.2f \n", lastamt);
		printf("Discount for This Package: %.2f \n", disc);
		printf("Total cost with discount: %.2f", totamt); 
	}
	else if (pckg == 3)
	{
		disc = (float) 12500 * 7/100;
		lastamt = (float) Numper * 12500;
		totamt = lastamt - disc;
		printf("Amount for Selected Package: %.2f \n", lastamt);
		printf("Discount for This Package: %.2f \n", disc);
		printf("Total cost with discount: %.2f", totamt); 
	}
	else
	{
		printf("Entered Package is Invalid");
	}
	
	return 0; // end of the code
}

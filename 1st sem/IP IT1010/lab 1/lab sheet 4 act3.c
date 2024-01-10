//about the adventure resort packages 
#include <stdio.h>
int main()
{
	int package;
	
	//selecting package
	printf ("Select your package (1, 2, 3) :");
	scanf  ("%d", &package);
	
	//assuming number of people
	int numOfperson;
	printf ("Number of people :");
	scanf  ("%d", &numOfperson);
	
	//total amount declairing
	int totalamount;
	
	switch (package)
	{
		case 1 : printf ("Horse ride.\n");
					break;
		case 2 : printf ("Scuba diving.\n");
					break;
		case 3 : printf ("Water rafting.\n");
					break;
		default : printf ("Invalid package.\n");
					break;
	}//end of switch statement
	
	if (package == 1)
	{
		totalamount = 2000 * numOfperson;
		printf ("Total amount :%d.", totalamount);
	}
	
	else if (package == 2)
	{
		totalamount = 5000 * numOfperson;
		printf ("Total amount :%d.", totalamount);
	}
	
	else if (package == 3)
	{
		totalamount = 7000 * numOfperson;
		printf ("Total amount :%d.", totalamount);
	}
	
	else 
	{
		printf ("Recheck your package");
	}// end of if statement
	
	return 0;
} //end of main funtion

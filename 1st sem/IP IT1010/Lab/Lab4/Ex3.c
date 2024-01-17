//This program shows input the package type and number of people from the key board and calculate total cost
#include <stdio.h>

int main()
{
	int type, ppl, cost1, cost2, cost3, tot;
	
	printf(" 1 - Horse Ride (2000/-) \n 2 - Scuba Diving (5000/-) \n 3 - Water Rafting (7000/-) \n Enter your package type:");
	scanf("%d", &type);
	
	printf(" Enter number of people:");
	scanf("%d", &ppl);
	
	switch (type)
	{
		case 1 : cost1 = ppl * 2000;
		printf(" Your total cost: %d", cost1);
			break;
	
		case 2 : cost2 = ppl * 5000;
		printf(" Your total cost: %d", cost2);
			break;
	
		case 3 : cost3 = ppl * 7000;
		printf(" Your total cost: %d", cost3);
			break;
		
		default : printf(" Invalid Input Found. Run the program again !!!");
	}
	return 0;
}

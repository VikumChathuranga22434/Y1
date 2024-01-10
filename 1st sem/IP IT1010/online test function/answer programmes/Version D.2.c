#include <stdio.h>

float calculateTotalCost (int itemNo, int quantity);
void printDetails (int itemNo, int quantity, float totalCost);

int main()
{
	int x, y;
	
	printf ("Enter item no : ");
	scanf  ("%d", &x);
	
	printf ("Enter Quantity : ");
	scanf  ("%d", &y);
	
	calculateTotalCost(x, y);
	
	printDetails (x, y, calculateTotalCost(x, y));
	
	return 0;
	
}

float calculateTotalCost (int itemNo, int quantity)
{
	float total_cost;
	
	switch (itemNo)
	{
		case 1 : total_cost = 100.00 * quantity;
					break;
					
		case 2 : total_cost = 200.00 * quantity;
					break;
					
		case 3 : total_cost = 300.00 * quantity;
					break;
					
		default : printf ("Invalid Item no.\n");
					break;
	}
	
	return total_cost;
}

void printDetails (int itemNo, int quantity, float totalCost)
{
	printf ("Item No : %d\n", itemNo);
	printf ("Purchased Quantity : %d\n", quantity);
	printf ("Total Cost : %.2f\n", totalCost);
}

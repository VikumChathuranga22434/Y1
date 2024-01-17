#include <stdio.h>

int main ()
{
	int i, j, qty;
	char itemId[20], name[30];
	float price, netPrice, total;
	
	FILE * cfPtr;

	cfPtr = fopen ("purchase.txt", "w");
	
	if (cfPtr == NULL)
	{
		printf ("Cannot create file.\n");
		return -1;
	}
	
	for (i = 0; i < 4; ++i)
	{
		printf("Enter item Id       : ");
		scanf("%s", itemId);
			
		printf("Enter Name          : ");
		scanf("%s", name);
		
		printf("Enter Quantity(kg)  : ");
		scanf("%d", &qty);
			
		printf("Enter Price for 1kg : ");
		scanf("%f", &price);
			
		fprintf(cfPtr, "%s\t %s\t %d\t %.2f\n", itemId, name, qty, price);
			
		printf("\n");
	}
	
	fclose (cfPtr);
	
	cfPtr = fopen("purchase.txt", "r");
	
	if (cfPtr == NULL)
	{
		printf ("Cannot be open the file.\n");
	}
	
	printf ("Item ID & Item Name\t Quantity\t Unit price\t Price(Rs.)\n");
	//fscanf (cfPtr, "%s %s\t %d\t %.2f\t %.2f\n", itemId, name, &qty, &price, price * qty);
	/*
	do 
	{
		fscanf (cfPtr, "%s %s\t %d\t %.2f\t %.2f\n", itemId, name, &qty, &price, price * qty);
		printf ("%s %s\t\t %d\t\t %.2f\t\t  %.2f\n", itemId, name, qty, price, price * qty);
		
		total += price * qty;
	}while(!feof(cfPtr));*/
	
	for (i = 0; i < 4; ++i)
	{
		fscanf (cfPtr, "%s %s %d %f %f", itemId, name, &qty, &price, price * qty);
		printf ("%s %s\t\t %d\t\t %.2f\t\t  %.2f", itemId, name, qty, price, price * qty);
			
		total += price * qty;	
		
		printf ("\n");
		
	}
	
	printf ("Total\t\t\t\t\t\t\t %.2f\n", total);
	
	fclose (cfPtr);
	
	return 0;
}

#include <stdio.h>
float calPayment (int itemcode, int quantity);

int main ()
{
	int code, quan;
	
	printf ("Enter Item Code : ");
	scanf  ("%d", &code);
	
	printf ("Enter Quantity : ");
	scanf  ("%d", &quan);
	
	printf ("Total price : %.2f", calPayment(code, quan));
	
	return 0;
}

float calPayment (int itemcode, int quantity)
{
	float price;
	
	if (itemcode == 1)
	{
		price = quantity * 50.00;
	}
	
	else if (itemcode == 2)
	{
		price = quantity * 100.00;
	}
	
	else 
	{
		printf ("Invalid item code.\n");
	}
	
	return price;
}

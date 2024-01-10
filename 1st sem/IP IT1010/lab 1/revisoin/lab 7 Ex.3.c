#include <stdio.h>
#include <assert.h>

float calPayment (char type);
float calDiscount (int age, float payment);
void testDiscount (char x);

int main ()
{
	char x;
	int y;
	float tol, Discount, pay;
	
	testDiscount (x);
	
	printf ("\nEnter the package type (C,H,S) : ");
	x = getchar();
	
	pay = calPayment (x);
	
	printf ("\nEnter the patient age : ");
	scanf  (" %d", &y);
	
	Discount = calDiscount (y, pay);
	
	tol = 	pay - Discount;
	
	printf ("The net amount needed to be paid : %.2f\n", tol);
	
	return 0;	
}

float calPayment (char type)
{
	switch (type)
	{
		case 'S'  : printf ("Stroke Prevention Package.\n");
						return 15000.00;
						break;
						  
		case 'C'  : printf ("Stroke Prevention Package.\n");
						return 50000.00;
						break;
						  
		case 'H'  : printf ("Healthy Heart Check Package.\n");
						return 30000.00;
						break;
						  
		default : printf ("Invalid package type.\n");
					break;
	}
}

float calDiscount (int age, float payment)
{
	if (age >= 60)
	{
		return payment * 10 / 100.0;
	}
	
	else 
	{
		return 0;
	}
}

void testDiscount (char x)
{
	assert (calDiscount(50, 30000) == 0);
	assert (calDiscount(60, 30000) == 3000);
	
	printf ("Test passed.\n");
}

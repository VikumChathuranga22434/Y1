#include <stdio.h>

//Declaration of functios
float getDiscountPrice (int noOfGuests, float chargePerGuest);
float getAmount (int noOfGuests, float chargePerGuest, float discount);

int main ()
{
	int no;
	float cpg, total;
	
	printf ("Enter no of guests : ");
	scanf  ("%d", &no);
	
	printf ("Enter charge per guest : ");
	scanf  ("%f", &cpg);
	
	printf ("Discount : %.2f\n", getDiscountPrice(no, cpg));
	printf ("Amount to be paid : %.2f\n", getAmount(no, cpg, getDiscountPrice(no, cpg)));
}

//Implement of functions
float getDiscountPrice (int noOfGuests, float chargePerGuest)
{
	float discount, hotel_charge;
	
	hotel_charge = noOfGuests * chargePerGuest;
	
	if (noOfGuests > 200)
	{
		discount = hotel_charge * 10 / 100.0;
		
		return discount;
	}
	
	else 
	{
		printf ("You're not qualified to the discount.\n'");
	}
}

float getAmount (int noOfGuests, float chargePerGuest, float discount)
{
	float finallPayment;
	
	finallPayment = (noOfGuests * chargePerGuest) - discount;
	
	return finallPayment;
}

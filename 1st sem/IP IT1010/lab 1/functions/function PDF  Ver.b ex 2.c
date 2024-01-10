#include <stdio.h>

//function prototype

float getDiscountPrice (int noOfGuests, float chargePerGuest);
float getAmount (int noOfGuests, float chargePerGuest, float discount);

//main function
int main ()
{
	//variable declaration
	int noOfGuests;
	float chargePerGuest, discount, amountToBePaid;
	
	//Input no of guests
	printf ("Enter no of guests : ");
	scanf  ("%d", &noOfGuests);
	
	//input charge per guest 
	printf ("Enter charge per guest : ");
	scanf  ("%f", &chargePerGuest);
	
	//get discount price
	discount = getDiscountPrice(noOfGuests, chargePerGuest);//function call
	
	printf ("Discount : %.2f\n", discount);
	
	//Get Amount to be paid 
	amountToBePaid = getAmount(noOfGuests, chargePerGuest, discount);//function call
	
	printf ("Amount to be paid = %.2f", amountToBePaid);
	
	return 0;
}

//function initialization 
float getDiscountPrice (int noOfGuests, float chargePerGuest)
{
	float discount;
	
	//check noOfGuests is more than 200.
	if (noOfGuests > 200)
	{
		discount = (noOfGuests * chargePerGuest) * 10 / 100.0;
	}
	
	return discount;
}

float getAmount (int noOfGuests, float chargePerGuest, float discount)
{
	float amountToBePaid = 0;
	
	amountToBePaid = (noOfGuests * chargePerGuest) - getDiscountPrice(noOfGuests, chargePerGuest);// function call
	
	return amountToBePaid;
}

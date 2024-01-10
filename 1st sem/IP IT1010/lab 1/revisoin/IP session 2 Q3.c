#include <stdio.h>
#include <assert.h>

float calcRemainingFuel(int vehicleType, float usedFuelQuota);
float calcfuelcost(int vehicleType, float usedFuelQuota);
void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost);

float calcRemainingFuel(int vehicleType, float usedFuelQuota)
{
	float remfuelQuota;
	
	switch (vehicleType)
	{
		case 1 : if (remfuelQuota <= 5 && usedFuelQuota > 0)
					{
						remfuelQuota = 5 - usedFuelQuota;
					}
					
					else 
					{
						printf ("Not allowed fuel amount.\n");
						break;
					}
					break;
					
		case 2 : if (remfuelQuota <= 20 && usedFuelQuota > 0)
					{
						remfuelQuota = 20 - usedFuelQuota;
					}
					
					else 
					{
						printf ("Not allowed fuel amount.\n");
						break;
					}
					break;
					
		case 3 : if (remfuelQuota <= 20 && usedFuelQuota > 0)
					{
						remfuelQuota = 20 - usedFuelQuota;
					}
					
					else 
					{
						printf ("Not allowed fuel amount.\n");
						break;
					}
					break;
					
		case 4 : if (remfuelQuota <= 30 && usedFuelQuota > 0)
					{
						remfuelQuota = 30 - usedFuelQuota;
					}
					
					else 
					{
						printf ("Not allowed fuel amount.\n");
						break;
					}
					break;
					
		default : printf ("Invalid Vehicle Type.\n");
					break;
	}
	
	return remfuelQuota;
}

float calcfuelcost(int vehicleType, float usedFuelQuota)
{
	float fuelCost;
	
	if (vehicleType == 1)
	{
		return usedFuelQuota * 370.0;
	}
	
	else if (vehicleType == 2)
	{
		return usedFuelQuota * 370.0;
	}
	
	else if (vehicleType == 3)
	{
		return usedFuelQuota * 510.0;
	}
	
	else if (vehicleType == 4)
	{
		return usedFuelQuota * 370.0;
	}
	
	else 
	{
		printf ("Invalid Vehicle Type.\n");
	}
	
}

void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost)
{
	printf ("Vehicle type\t Quota used\t Quota Remaining\t Fuel cost\n");
	printf ("%d\t\t %.2f\t\t %.2f\t\t\t %.2f\n", vType, usedFuelQuota, remainingQuota, cost);
}

int main ()
{
	int type;
	float usfuelq, remain, tolCost;
	
	assert(calcRemainingFuel(1, 3) == 2);
	assert(calcRemainingFuel(2, 15) == 5);
	
	do 
	{
		printf ("Enter the Vehicle Type : ");
		scanf ("%d", &type);
		
		if (type == -1)
		{
			return -1;
		}
		
		printf ("Enter Used fuel quota : ");
		scanf ("%f", &usfuelq);
		
		remain = calcRemainingFuel(type, usfuelq);
		
		tolCost = calcfuelcost(type, usfuelq);
		
		displayDetails(type, usfuelq, remain, tolCost);
		
	}while(1);
	
	return 0;	
}

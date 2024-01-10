#include <stdio.h>
#include<assert.h>

float calPayment(char type); //Function declaration
float calDiscount(int age, float payment);
void testDiscount();

//Function implementation
float calPayment(char type){
	
	switch(type){
		case 'S':
			return 15000;
			break;
		
		case 'C':
			return 50000;
			break;
			
		case 'H':
			return 30000;
			break;
			
		default:
			printf("Invalid Type\n");
	}
}

float calDiscount(int age, float payment){
	
	if(age >= 60){
		return payment * 10.0 / 100;
	}
	
	else{
		return 0;
	}
}

void testDiscount(){
	
	assert(calDiscount(65, 15000) == 1500);
	assert(calDiscount(55, 15000) == 0);
	assert(calDiscount(50, 50000) == 0);
	
}

int main(){
	
	int age;
	char type;
	float Netamount, payment;
	
	testDiscount(); //call testDiscount() function
	
	//Gtting user inputs
	printf("Enter package type: ");
	scanf("%c", &type);
	
	printf("Enter patient age: ");
	scanf("%d", &age);
	
	payment = calPayment(type);
	
	Netamount = payment - calDiscount(age, payment);
	
	printf("Net amount needed to be paid: %.2f", Netamount);
	
	return 0;
}







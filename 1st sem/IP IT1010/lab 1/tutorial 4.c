#include <stdio.h>

/*int main()
{
	int num;
	
	printf ("Enter your number : ");
	scanf  ("%d", &num);
	
	if (num >= 0)
	{
		printf ("%d positive number.", num);
	}
	
	else 
	{
		num *= -1 ;
		printf ("%d is a negative number, Modified.", num);
	}
	
	return 0;
}*/

int main()
{
	char type, w, W, d, D;
	
	float balance, amount;
		
	printf ("Input trancition type (withdrawal/ Deposit) : ");
	type = getchar();
	
	if (type == 'w' || type == 'W')
	{
		printf ("\nYou have to selected to withdraw money.\n\n");
			
		printf ("Input the Bank balance : ");
		scanf  ("%f", &balance);
		
		printf ("Input the the amount   : ");
		scanf  ("%f", &amount);
		
		if (amount <= balance)
		{
			balance -= amount;
		}
		
		else 
		{
			printf ("Invalid Amount.\n");
		}
		
		printf ("Your final Bank balance is %.2f.\n", balance);
		
	}
		
	else if (type == 'd' || type == 'D')
	{
		printf ("You have to selected to deposit money.\n\n");

		printf ("Input the Bank balance : ");
		scanf  ("%f", &balance);	
			
		printf ("Input the the amount   : ");
		scanf  ("%f", &amount);
		
		balance += amount;
		
		printf ("\nYour final Bank balance is %.2f.\n", balance);
	}
	
	else 
	{
		printf ("\nYou have to selected an invalid transaction type.\n");
	}
	
	return 0;
}

/*int main ()
{
	float num1, num2, total;
	char opr;
	
	printf ("Enter your first number : ");
	scanf  ("%f", &num1);
	
	printf ("Enter the operator : ");
	scanf  (" %c", &opr);
	
	printf ("Enter your second number : ");
	scanf  ("%f", &num2);
	
	
	if (opr == '+')
	{
		total = num1 + num2;
	}
	
	else if (opr == '-')
	{
		total = num1 - num2;
	}
	
	else if (opr == '*')
	{
		total = num1 * num2;
	}
	
	else if (opr == '/');
	{
		if (num2 == 0)
		{
			printf ("Error Division with 0.\n");
			return 0;
		}
		
		total = num1 / num2;
	}
	
	else
	{
		printf ("Invalid operator.\n");
	}
	
	printf ("Answer = %.2f", total);
	
	return 0;
}*/

/*int main ()
{
	float num1, num2, total;
	char opr;
	
	printf ("Enter your first number : ");
	scanf  ("%f", &num1);
	
	printf ("Enter the operator : ");
	scanf  (" %c", &opr);
	
	printf ("Enter your second number : ");
	scanf  ("%f", &num2);
	
	switch (opr)
	{
		case '+' : total = num1 + num1;
				   break;
		
		case '-' : total = num1 - num2;
				   break;
				   
		case '*' : total = num1 * num2;
				   break;
				   
		case '/' : if (num2 == 0)
				   {
				   		printf ("Error division with 0. \n");
			       }
			       
			       else 
			       {
			       		total = num1 / (("%.2f"), num2 += 0.0);
				   }
				   break;
		
		default : printf ("Invalid operator.\n");
				  break;
	}
	
	printf ("Answer = %.2f", total);
	
	return 0;
}*/

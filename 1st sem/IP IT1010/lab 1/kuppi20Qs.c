#include <stdio.h>

int main()
{
	int option, number;
	char size, top;
	
	printf ("Pizza Paradise\n");
	
	printf ("Enter your pizza option : ");
	scanf  ("%d", &option);
	
	if (option == 1)
	{
		printf ("Italiano\n");
	}
	
		else if (option == 2)
		{
			printf ("Chessy Onion\n");
		}
	
			else if (option == 3)
			{
				printf ("Hot Gralic Prawns\n");
			}
			
				else
				{
					printf ("Invalid option\n");
				}
	
	printf ("Enter your Pizza size (P/M/L) : ");
	scanf  ("%s", &size);
	
	if (size == 'p' || 'P')
	{
		printf ("Number of Pizzas :");
		scanf  ("%d", &number);
	}
	
		else if (size == 'm' || 'M')
		{
			printf ("Number of Pizzas");
			scanf  ("%d", &number);
		}
		
			else if (size == 'l' || 'L')
			{
				printf ("Number of Pizzas");
				scanf  ("%d", &number);
			}
			
				else
				{
					printf ("Invalid size\n");
				}
	
	do{
		printf ("Do you need any extra toppins :");
		scanf  ("%s", &top);
		
		if (top == 'y' || 'Y')
		{
			char toption;
			printf ("Enter your option :");
			scanf  ("%s", &toption);
			
			switch (toption)
			{
			 case '1' : printf ("You selected option 1\n");
			 			break;
			 
			 case '2' : printf ("You selected option 2\n");
			 			break;
			 			
			 case '3' : printf ("You selected option 3\n");
			 			break;
			 			
			 default : printf ("Invalid option.\n");
			 			break;
			}
		}
		
		else
		{
			printf ("Access denied.\n");
		}
	}while (top == 'n' || 'N');
	
	int total;
	return 0; 
}



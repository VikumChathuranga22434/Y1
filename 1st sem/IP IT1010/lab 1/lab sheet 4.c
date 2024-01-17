#include <stdio.h>
/*
//Exercise 1
void selection(double a, double b, double c);// Declaring Selection function

int main()
{
	double x, y, z;// declaring variables 
	
	// Getting values by user
	
	printf ("Enter 1st angle : ");
	scanf  ("%lf", &x);
	
	printf ("Enter 2nd angle : ");
	scanf  ("%lf", &y);
	
	printf ("Enter 3rd angle : ");
	scanf  ("%lf", &z);	
	
	// Call selection function & passing arguments 
	selection (x, y, z);
	
	return 0;
}// End main function

void selection (double a, double b, double c)// functioning selction function
{
	double sum = 0.0;
	
	sum = a + b + c; // Calculating total of angles
	
	// Checking given conditions 
	if (sum == 180)
	{
		printf ("\nYour able to create triangle.\n");
	}
	
	else 
	{
		printf ("\nInvalid Angles.\n");
		printf ("Your angles are not equal to 180.\n");
	}// end if condition
	
}// End of selection function*/

//Exercise 2
/*
float area_rectangle (float x, float y);
float area_triangle  (float z, float w);
float area_circle    (float r);

int main ()
{
	char Shape;
	
	float width, length, base, heigth, radius;

	printf ("Enter the first character of the shape (R, T, C) :");
	Shape = getchar();
	
	switch (Shape)
	{
		case 'R' : printf ("Enter Width : ");
				   scanf  (" %f", &width);
				   
				   printf ("Enter length : ");
				   scanf  (" %f", &length);
				   
				   printf ("Area of the rectangle = %.2f.", area_rectangle(width, length));
				   break;
				   
		case 'T' : printf ("Enter Base : ");
				   scanf  (" %f", &base);
				   
				   printf ("Enter Heigth : ");
				   scanf  (" %f", &heigth);
				   
				   printf ("Area of the triangle = %.2f.", area_triangle(base, heigth));
				   break;
				   
		case 'C' : printf ("Enter radius : ");
				   scanf  (" %f", &radius);
				   
				   printf ("Area of the circle = %.2f.", area_circle(radius));
				   break;
	}
}

float area_rectangle (float x, float y)
{
	float area;
	
	area = x * y;
	return area;
}

float area_triangle (float z, float w)
{
	float area;
	
	area = z * w / 2.0;
	return area;
}

float area_circle (float r)
{
	float area;
	
	area = 22 / 7.0 * r * r;
	return 0;
}*/

//Exercise 
void tol(float cpr, float t);

int main ()
{
	int x, y, z;
	
	printf ("Welcome! To Adventure resort PANADURA.\n\n");

//	do
//	{	
		printf ("Choose your package type (0 to exit) : ");
		scanf  ("%d", &x);
		
		
		if (x == 1)
		{
			printf ("\nPackage type - Horse Ride.\n");
			printf ("Cost per person - Rs.2000.00\n\n");
			
			printf ("Number of people : ");
			scanf  ("%d", &y);
			
			z =  2000;
			
			tol(z, y);
		}
		
		else if (x == 2)
		{
			printf ("\nPackage type - Scube Riding.\n");
			printf ("Cost per person - Rs.5000.00\n\n");
			
			printf ("Number of people : ");
			scanf  ("%d", &y);
			
			z = 5000;
			
			tol(z, y);	
		}
		
		else if (x == 3)
		{
			printf ("\nPackage type - Water Rafting.\n");
			printf ("Cost per person - Rs.7000.00\n\n");
			
			printf ("Number of people : ");
			scanf  ("%d", &y);	
			
			z = 7000;
			
			tol(z, y);	
		}
		
		else 
		{
			printf ("\nInvalid Package type.\n");
			//break;
		}
		
//	}while (x != 0);

	
	return 0;
}

void tol(float cpr, float t)
{
	float total = 0;
	
	total = cpr * t;
	
	printf ("\nYour total cost is Rs.%.2f\n\n", total);
}

//this program displays the else statement 
#include <stdio.h>
int main()
{
	char R, T, C;
	int shape;
	
	printf ("Enter the first character if the shape (R, T, C) :");
	shape = getchar();
	
	if (shape == 'R')
	{
		double width, heigth, area;
		printf ("Your able to draw a %s.\n", "Rectangle");
	
		//assuming to the values	
		printf ("Enter your width :");
		scanf  ("%lf", &width);
		
		printf ("Enter your heigth :");
		scanf  ("%lf", &heigth);
		
		//calculation
		area = width * heigth;
		
		//display area
		printf ("Area of the rectangle %.2lf", area);
	}
	
	else if (shape == 'T')
	{
		double base, heigth, area;
		printf ("Your able to draw a %s.\n", "Triangle");
	
		//assuming to the values	
		printf ("Enter your base :");
		scanf  ("%lf", &base);
		
		printf ("Enter your heigth :");
		scanf  ("%lf", &heigth);
		
		//calculation
		area = (base * heigth) / 2.0;
		
		//display area
		printf ("Area of the triangle %.2lf", area);
	}
	
	else if (shape == 'C')
	{
		double radius, area;
		printf ("Your able to draw a %s.\n", "circle");
	
		//assuming to the values	
		printf ("Enter your Radius :");
		scanf  ("%lf", &radius);
		
		//calculation
		float w = 22 / 7.0;
		area = w * radius * radius;
		
		//display area
		printf ("Area of the circle %.2lf\n", area);
	}
	
	else 
	{
		printf ("%s", "Invalid character");
	}//end of if statement 
	
}//end of main funtion

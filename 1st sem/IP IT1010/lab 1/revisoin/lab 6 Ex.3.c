#include <stdio.h>
#include <math.h>

float circleArea (float radius);
float circlePeri (float radius);
float recArea (float width, float length);

int main ()
{
	float radius, height, tol_Area;
	
	printf ("Enter radius of cylinder : ");
	scanf  ("%f", &radius);
	
	printf ("Enter height of the cylinder : ");
	scanf  ("%f", &height);
	
	tol_Area = circleArea(radius) + recArea (circlePeri (radius), height);
	
	printf ("The area of a cylinder is : %.2f", tol_Area);
	
	return 0;	
}

float circleArea (float radius)
{
	return 22 / 7.0 * pow(radius, 2);
}

float circlePeri (float radius)
{
	return 2 * 22 / 7.0 * radius;
}

float recArea (float width, float length)
{
	return width * length;
}

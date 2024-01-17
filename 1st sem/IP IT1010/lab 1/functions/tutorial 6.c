#include <stdio.h>
#include <math.h>

//Exercise 1
/*
int main ()
{
	printf ("%.2f\n", floor(7.5));
	printf ("%.2f\n", ceil(0.0));
	printf ("%.2f\n", ceil(-6.4));
	printf ("%.2f\n", ceil(0.0));
	printf ("%.2f\n", log10(100.0));
	printf ("%.2f\n", ceil(floor(-5.5)));
	
	return 0;
}*/

//exercise 2
/*
float circleArea(float y);

int main ()
{
	float radius;
	
	printf ("Enter radius : ");
	scanf  ("%f", &radius);
	
	printf ("Circle area is = %.2f", circleArea(radius));
}

float circleArea(float y)
{
	float area;
	
	area = 22 / 7.0 * y * y;
	
	return area;
}*/

//Exercise 3

int add (int n1, int n2);
int multiply (int no1, int no2);
int square (int x);

int main()
{
	int a, b, c, d;
/*	
	a = multiply (4, 3);
	b = multiply (5, 7);
	c = add (a, b);
	d = square (c);
	
	printf ("Answer = %d", d);
	*/
	int v;
	
	//printf ("Answer = %d", square(add(multiply(4, 3), multiply(5, 7))));
	
	v = square(add(multiply(4, 3), multiply(5, 7)));
	
	printf ("Answer = %d", v);
	
	return 0;
}

int add(int n1, int n2)
{
	int add;
	
	add = n1 + n2;
	
	return add;
}

int multiply (int no1, int no2)
{
	int tol;
	
	tol = no1 * no2;
	
	return tol;
}

int square (int x)
{
	return x * x;
}

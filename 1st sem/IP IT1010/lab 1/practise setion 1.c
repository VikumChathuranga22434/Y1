#include <stdio.h>

int main ()
{
	int age;
	age = 40;
		printf ("my age is %d years old\n", age);
	age = age - 10*5%3;
		printf ("saman's age is %d years old\n", age);
	int a = 3;
		printf ("%d\n", a); 

		
	int c = 10;
	int b = a*2;
	char d = 'i';
		printf ("2 times %d %cs %d\n", c, d, b);
		
	/* using conversion specifiersin c a program*/
 		printf( "%d\n", 455);
		printf( "%d\n", -455);
		printf( "%i\n", 455);
		printf( "%f\n", 1234567.89);
		printf( "%.2f\n", 3.446);
		printf( "%c\n", 'A' );

	 	printf ("%f\n", 2.1203033);
	 	printf ("%.4f\n", 2.1203033);
	 	printf ("%.2f\n", 2.1203033);
	 	
	int x = 1;
		printf ("system given number is %d\n", x);
		
		printf ("Input your number : ");
		scanf  ("%d", &x);
		
		printf ("You have entered number %d\n", x);
	return 0;
}

#include <stdio.h>

void max(int x, int y);

void max(int x, int y){
	
	if (x < y){
		printf ("%d", y);
	}
	
	else {
		printf ("%d", x);
	}
	
}

void main (){
	
	int x, y;
	
	printf ("Enter first number : ");
	scanf ("%d", &x);
	
	printf ("Enter second number : ");
	scanf ("%d", &y);
	
	max(x, y);
	
}

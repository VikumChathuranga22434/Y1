//Calculate the are area - rectangle, triangle, circle
#include <stdio.h>

int main(){
	
	float base, hei, wid, len, rad, areaR, areaT, areaC;
	char lett;
	
	//getting 1st user input
	printf("Enter a letter that indicates the area of the triangle or rectangle or cicle what do you want (R- Rectangle, T - Triangle, C - Circle) : ");
	scanf("%c", &lett);
	
	//if else conditions	
	if (lett == 'R'){
		
		printf("Enter Width and Length :");
		scanf("%f%f", &wid, &len);
		
		areaR = wid * len;
		
		printf("Area of the rectangle = %.2f", areaR);
		
	} 
	else if (lett == 'T'){
		
		printf("Enter Base and Height :");
		scanf("%f%f", &base, &hei);
		
		areaT = (base * hei) / 2.0;
		
		printf("Area of the triangle = %.2f", areaT);
		
	} 
	else if (lett == 'C'){
		
		printf("Enter Radius :");
		scanf("%f", &rad);
		
		areaC = 22 / 7.0 * rad * rad;
		
		printf("Area of the circle = %.2f", areaC);
		
	} 
	else {
		printf("It's not valid. Enter R/T/C one of them !!!");
	}
	
	return 0;
	 
}

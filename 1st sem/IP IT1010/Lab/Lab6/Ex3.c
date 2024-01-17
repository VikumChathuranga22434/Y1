#include <stdio.h>

//function declaration
float circleArea(float radius);
float circleperi(float radius);
float recArea(float width, float length);

//function implimentation
float circleArea(float radius){
	return 22.0 / 7 * radius * radius;
}

float circleperi(float radius){
	return 2 * 22.0 / 7 * radius;
}

float recArea(float width, float length){
	return width * length;
}

int main(void){
	
	float CylinderArea, CircleArea, RectangleArea, hight, length, rad;
	
	//gettig user inputs
	printf("Enter the radius: ");
	scanf("%f", &rad);
	
	printf("Enter the hight: ");
	scanf("%f", &hight);
	
	CircleArea = circleArea(rad);//call Functions
	length = circleperi(rad);
	RectangleArea = recArea(hight, length);
	
	CylinderArea = 2 * CircleArea + RectangleArea;
	
	printf("Area of the Cylinder: %.4f", CylinderArea); //Output with answer
	
	return 0;
}

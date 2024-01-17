//Iput values for three angles and display whether a triangle can be formed or not
#include <stdio.h>

int main()
{
	int ang1, ang2, ang3, totalang;
	
	//getting user inputs
	printf("Enter the 1st angle: ");
	scanf("%d", &ang1);
	
	printf("Enter the 2nd angle: ");
	scanf("%d", &ang2);
	
	printf("Enter the 3rd angle: ");
	scanf("%d", &ang3);
	
	//equation for runnig this program
	totalang = ang1 + ang2 + ang3;
	
	if (totalang == 180){
		printf("These angles can formed triangle");
	} else {
		printf("These angles can't formed triangle");
	}
	return 0;
}



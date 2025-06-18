// Angle  Calculation
// Rudra Thakkar
// 18-06-2025

#include <stdio.h>

int main()
{
	int a1,a2,a3;
	printf("Provide me first angle of triangle: \n");
	scanf("%d",&a1);
	printf("Provide me second angle of triangle: \n");
	scanf("%d",&a2);
	a3 = 180 - (a1 + a2);
	printf("The third angle of triangle is %d \n",a3);
	return 0;
}
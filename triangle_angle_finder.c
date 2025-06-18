// Gross Salary Calculation
// Rudra Thakkar
// 18-06-2025

#include <stdio.h>

int main()
{
	int s1,s2,s3;
	printf("Provide me first side of triangle: \n");
	scanf("%d",&s1);
	printf("Provide me second side of triangle: \n");
	scanf("%d",&s2);
	s3 = 180 - (s1 + s2);
	printf("The third side of triangle is %d \n",s3);
	return 0;
}
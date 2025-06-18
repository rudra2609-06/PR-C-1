// Gross Salary Calculation
// Rudra Thakkar
// 18-06-2025

#include <stdio.h>

int main()
{
	int gs, bs;
	printf("Enter Your base salary so that I can give you your gross salary! \n");
	scanf("%d", &bs);
	gs = ((bs * 0.1 + bs * 0.05 + bs * 0.08) + bs);
	printf("Your gross salary is : %d", gs);
	return 0;
}
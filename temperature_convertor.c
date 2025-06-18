// Temperature conversion from celsius to farenheit
// Rudra Thakkar
// 18-06-2025

#include <stdio.h>

int main()
{
	float deg_celsius, deg_farenheit;
	printf("Enter temperature in degree celsius: \n");
	scanf("%f", &deg_celsius);
	deg_farenheit = (deg_celsius * 9) / 5 + 32;
	printf("Your temperature in degree farenheit is %.1f \n", deg_farenheit);
	return 0;
}
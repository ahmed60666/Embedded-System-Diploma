/*
 * main.c
 *
 *  Created on: Jul 23, 2023
 *      Author: hmed Rashad
 */

#include <stdio.h>
int main()
{
	float x,y,z;
	printf("enter value of a ");
	fflush(stdout);
	scanf("%f",&x);
	printf("enter value of b ");
	fflush(stdout);
	fflush(stdout);
	scanf("%f",&y);
	fflush(stdin);
	z=x;
	x=y;
	y=z;
	 printf("\nAfter swapping, value of a = %.2f\n", x);
	 fflush(stdout);
	printf("After swap b= %f",y);
	fflush(stdout);
return 0;
}



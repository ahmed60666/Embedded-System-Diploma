/*
 * main.c
 *
 *  Created on: Jul 23, 2023
 *      Author: hmed Rashad
 */
#include <stdio.h>
int main()
{
	float x,y,product;
	printf("Enter two number");
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	fflush(stdin);
	product=x*y;
	printf("product:%f",product);



return 0;


}


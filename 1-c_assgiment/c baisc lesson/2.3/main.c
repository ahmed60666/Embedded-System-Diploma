/*
 * main.c
 *
 *  Created on: Jul 24, 2023
 *      Author: hmed Rashad
 */
#include <stdio.h>
int main()
{
	float x,y,z;
	printf("Enter three number");
	fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);
	fflush(stdin);
	if (x>y&&x>z)
		printf("%f is the lrgest number",x);
	else if(y>x&&y>z)
		printf("%f is the lrgest number",y);
	else

		printf("%f is the lrgest number",z);

	return 0;
}


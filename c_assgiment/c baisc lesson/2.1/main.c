/*
 * main.c
 *
 *  Created on: Jul 24, 2023
 *      Author: hmed Rashad
 */
#include <stdio.h>
int main()
{
int x,y;
printf("Enter int num");
fflush(stdout);
scanf("%d",&x);
fflush(stdin);
if(x%2==0)
	printf("num is even");


else
	printf("num is odd");
return 0;
}




/*
 * main.c
 *
 *  Created on: Jul 23, 2023
 *      Author: hmed Rashad
 */
#include <stdio.h>
int main()
{
	int x,y,sum;
	printf("enter two intger number");
	fflush(stdout);
	scanf("%d",&x);
	scanf("%d",&y);
	fflush(stdin);
	sum=x+y;
	printf("sum:=%d",sum);
	fflush(stdout);


return 0;
}

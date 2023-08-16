/*
 * main.c
 *
 *  Created on: Jul 23, 2023
 *      Author: hmed Rashad
 */
#include <stdio.h>
int main()
{
	char x;
     int y;
	printf("Enter any char");
	fflush(stdout);
	scanf("%c",&x);
	fflush(stdin);
	printf("ASCII VALUE of %c",x,"=");
	fflush(stdout);
	y=x;
	printf("%d",y);

return 0;
}


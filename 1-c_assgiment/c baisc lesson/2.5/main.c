/*
 * main.c
 *
 *  Created on: Jul 24, 2023
 *      Author: hmed Rashad
 */

#include <stdio.h>
int main()
{
char c ;
printf("Enter the alphabet char");
fflush(stdout);
scanf("%c",&c);
fflush(stdin);
if(c>='a'&&c<='z'||c>='A'&&c<='Z')
	printf("%c IS ALPHA NUMBER",c);
else
	printf("%cIS NOT ALPHA NUMBER",c);
return 0;
}



/*
 * main.c
 *
 *  Created on: Jul 24, 2023
 *      Author: hmed Rashad
 */
#include <stdio.h>
int main()
{
	char x;
	printf("Enter any char");
	fflush(stdout);
	scanf("%c",&x);
	fflush(stdin);
    (x=='a'||x=='A'||x=='e'||x=='C'||x=='i'||x=='I'||x=='o'||x=='O'||x=='o'||x=='O') ? printf("%cis a vowel",x):printf("%cis a vowel",x);
return 0;
}





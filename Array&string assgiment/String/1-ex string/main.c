/*
 * main.c
 *
 *  Created on: Aug 16, 2023
 *      Author: hmed Rashad
 */
#include <stdio.h>
int main ()
{
	char name[400],ch;
	int count ,i;
	printf("enter the words ");
	fflush(stdout);
	gets(name);
	printf("enter the charcter to count ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&ch);
	for(i=0;name[i]!='\0';i++)
	{
		if (ch==name[i])
		{
			++count;
		}


	}
	printf("the number of reabet charcter is=  %d",count);












	return 0;
}


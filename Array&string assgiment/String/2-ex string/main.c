/*
 * main.c
 *
 *  Created on: Aug 16, 2023
 *      Author: hmed Rashad
 */
#include <stdio.h>
int main()
{
	char ch[100],i;
	printf("enter any word ");
	fflush(stdout);fflush(stdin);
	gets(ch);
	for(i=0;ch[i]!='\0';i++);


		printf("the lentgh of string is=%d ",i);



return 0;








}


/*
 * main.c
 *
 *  Created on: Aug 16, 2023
 *      Author: hmed Rashad
 */
/*
 * main.c
 *
 *  Created on: Aug 16, 2023
 *      Author: hmed Rashad
 */
#include <stdio.h>
int main()
{
	char ch[100],temp;
	int i,j=0;
	printf("enter any word ");
	fflush(stdout);fflush(stdin);
	gets(ch);
	i=0;
	j=strlen(ch)-1;
	while (i<j){

		temp=ch[i];
		ch[i]=ch[j];
		ch[j]=temp;
		++i;
		j--;

	}

	printf("\nthe reverse is :%s",ch);
	fflush(stdout);
	return 0;








}




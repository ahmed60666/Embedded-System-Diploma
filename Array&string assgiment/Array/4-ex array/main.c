/*
 * main.c
 *
 *  Created on: Aug 15, 2023
 *      Author: hmed Rashad
 */
# include <stdio.h>
int main ()
{
	int aar1[20],element,loction,num,i;
	printf("enter the number of elemenmt ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("enter element no%d",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%d",&aar1[i]);
	}


	printf("enter the element");
	fflush(stdout);fflush(stdin);
	scanf("%d",&element);
	fflush(stdout);fflush(stdin);
	printf("enter the loction");
	scanf("%d",&loction);
	for(i=num;i>=loction;i--)
	{
		aar1[i]=aar1[i-1];

	}
	num++;
	aar1[loction-1]=element;

	for(i=0;i<num;i++)
	{
		printf("\n%d",aar1[i]);
		fflush(stdout);


	}


return 0;

}


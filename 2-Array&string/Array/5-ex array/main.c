/*
 * main.c
 *
 *  Created on: Aug 16, 2023
 *      Author: hmed Rashad
 */
/*
 * main.c
 *
 *  Created on: Aug 15, 2023
 *      Author: hmed Rashad
 */
# include <stdio.h>
int main ()
{
	int aar1[20],element,num,i=0;
	printf("enter the number of elemenmt ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("enter element no%d",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%d",&aar1[i]);
	}
	printf("entr the value you to search");
	fflush(stdout);fflush(stdin);
	scanf("%d",&element);
	i=0;
	while(i < num && element != aar1[i])
	{
		i++;
	}
	if (i < num)
	{
		printf("num is found at loction %d ",i+1);
	}
	else{
		printf("num not found");
	}
	return 0;

}




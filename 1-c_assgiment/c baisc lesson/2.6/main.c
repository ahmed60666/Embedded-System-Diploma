/*
 * main.c
 *
 *  Created on: Jul 24, 2023
 *      Author: hmed Rashad
 */
#include <stdio.h>
int main()
{
int x,sum=0;
printf("Enter int num");
fflush(stdout);
scanf("%d",&x);
fflush(stdin);
for(int i=0;i<=x;i++)
{

sum+=i;

}
printf("sum=%d",sum);
return 0;
}




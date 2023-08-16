/*
 * main.c
 *
 *  Created on: Jul 24, 2023
 *      Author: hmed Rashad
 */
#include <stdio.h>
int main()
{
int x,factriol=1;
printf("Enter int num");
fflush(stdout);
scanf("%d",&x);
fflush(stdin);
for(int i=1;i<=x;i++)
{

factriol*=i;

}
printf("factriol=%d",factriol);
return 0;
}






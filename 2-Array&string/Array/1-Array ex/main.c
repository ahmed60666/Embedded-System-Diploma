/*
 * main.c
 *
 *  Created on: Aug 15, 2023
 *      Author: hmed Rashad
 */
# include <stdio.h>
# include<string.h>
int main()
{
	int matrix_1[2][2];
	int matrix_2[2][2];
	int sum[2][2];
	printf("please enter the element of matrix 1");

	fflush(stdout);
	for (int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{

			printf("\nEnter element  %d%d",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%d",&matrix_1[i][j]);
		}
	}
		printf("please enter the element of matrix 2");
		for (int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					printf("Enter element  %d%d",i+1,j+1);
					fflush(stdout);fflush(stdin);
					scanf("%d",&matrix_2[i][j]);
				}
			}
		for (int i=0;i<2;i++)
		{
			for(int j=0;j<2;j++)
				sum[i][j]=matrix_1[i][j]+matrix_2[i][j];

		}
		printf("the sum of two array element/n");
		for (int i=0;i<2;i++)
				{
					for(int j=0;j<2;j++)
					{
						printf("%d \t",sum[i][j]);
                 if (j==1)

                 printf("\n");
					}
				}

		return 0;
	}


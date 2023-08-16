#include <stdio.h>
int main()
{
	float x;
	printf("Enter three number");
	fflush(stdout);
	scanf("%f",&x);

	if (x>0)
		printf("%f is the postive number",x);
	else if(x==0)
		printf(" you enter zero");


	return 0;
}

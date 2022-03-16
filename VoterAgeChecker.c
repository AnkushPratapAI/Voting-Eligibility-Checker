#include<stdio.h>
int main()
{
	int a;
	printf("Enter your Age:");
	scanf("%d",&a);

	if (a>=18 && a<=80){
		printf("You are eligible to vote!");
	}
	else if (a<=17 && a>=1){
		printf("You are not eligible to vote!");
	}
	else {
		printf("Please check you have entered incorrect age or input!\a");
	}
	
}

#include<stdio.h>
#include<conio.h>
int check();
int main()
{
	int b;
	b=check();
	if(b%2==0)
	{
		printf("it's even");
	}
	else{
		printf("odd");
	}
	getch();
	return 0;
}
int check()
{
	int a;
	printf("enter an integer:");
	getch();
	return 0;
}

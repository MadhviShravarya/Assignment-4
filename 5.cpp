//Write a program to print the first 10 odd natural numbers in reverse order
#include<stdio.h>
int main()
{
	int i;
	for(i=19;i>=1;i--)
	{
		if(i%2!=0)
		printf("%d\n",i);
	}
	return 0;
}

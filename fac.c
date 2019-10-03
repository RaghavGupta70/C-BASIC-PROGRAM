#include<stdio.h>
main()
{
	int i,f=1;  
	printf("Enter a Number\n");                                   
	scanf("%d",&i);
	while(i>0)                                     // i is counter variable, f is factorial
	{
		f=f*i;
		i--;
	}
	printf("Factorial=%d",f);
}

#include<stdio.h>
#include<conio.h>

main()
{
	int num;
	printf ("Enter the value of num:");
	scanf ("%d",&num);
	
	printf ("The number is :%d\n",num);
	(num%2==0)?printf("Even"):printf("Odd");
}

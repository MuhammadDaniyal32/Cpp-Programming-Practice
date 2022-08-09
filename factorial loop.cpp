#include<stdio.h>
#include<conio.h>

main()
{
	int a,f,i;
	printf("enter a number:");
	scanf("%d",&a);
	f=1;
	i=1;
	while(i<=a)
	{
		f=f*1;
		i++;
	}
	
	
	printf("factorial of %d is: %d",a,f);
}

#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	printf ("Enter A value:");
	scanf ("%d",&a);
	
	printf ("Enter B value:");
	scanf ("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf ("Now Value of A is :%d\n",a);
	printf ("Now Value of B is :%d\n",b);
	getchar();

}

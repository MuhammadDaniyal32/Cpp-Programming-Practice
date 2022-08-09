#include<stdio.h>
#include<conio.h>

main()
{
	int a=12,b=44,c=43,d=34;
	int e;
	e= (a+b)* c/d;
	printf ("Value of (a+b)* c/d is:     %d\n",e);
	e= ((a+b)*c)/d;
	printf ("Value of ((a+b)*c)/d is :   %d\n",e);
	e= (a+b) * (c/d);
	printf ("Value of (a+b) * (c/d) is : %d\n",e);
	e= a+(a*b) /d;
	printf ("Value of a+(a*b) /d is :    %d\n",e);
	
	getch();
}


#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	printf ("enter firt value=");
	scanf ("%d",&a);
	
	printf ("enter Second value=");
	scanf ("%d",&b);
	
	if (a<b)
	 printf ("Result %d < %d",a,b);
	 
	else if (a>b)
	 printf ("Result %d > %d",a,b);
	 
	else if (a==b)
	 printf ("Result %d = %d",a,b);
	
}

#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	
	printf ("Enter value for Pyramid\n");
	scanf ("%d",&a);
	
	for (b=0; b<a; b++)
	{
		for (c=a-b; c>0; c--)
		{
			printf ("    ");
		}
		
		for (d=0; d<(2*b)+1; d++)
		{
			printf ("*");
			printf ("\n");
		}
		
	   getch();
	}
}

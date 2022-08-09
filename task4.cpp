#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	
	printf ("Enter Table Number#");
	scanf ("%d",&a);
	
	printf ("Enter Table Range#");
	scanf ("%d",&c);
	
	
	for (b=1; b<=c; b++)
	{
		printf ("%d*%d=%d\n",a,b,a*b);
		
	}

getch();
}

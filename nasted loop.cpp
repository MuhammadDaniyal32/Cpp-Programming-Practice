#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,a;
	
	printf ("Plz Enter for pattern");
	scanf ("%d",&a);
	
	for (x=0; x<=a; x++)
	{
		for (y=1; y<=x; y++)
		{
		
			printf ("*");
		}
	 printf ("\n");
	}
	
	
}

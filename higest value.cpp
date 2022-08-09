#include<stdio.h>
#include<conio.h>

main()
{
	int r[5];
	int i ,b ;
	
	for (i=0; i<5; i++)
	{
		printf ("\nEnter vule :%d: ",i+1);
		scanf ("%d"&r[i]);
	}
	b= r[0];
	for (i=1; i<5; i++)
	{
		if (r[i]>b)
		b= r[i];
	}
	printf ("\nHigest value of entered was %d",b);
	getch();
}


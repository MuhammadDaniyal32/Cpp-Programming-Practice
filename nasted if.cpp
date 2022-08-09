#include<stdio.h>
#include<conio.h>

main()
{
	int x,y;
	
	printf ("Enter Choice is only 1:");
	scanf ("%d",&x);
	
	if ("x == 1")
	{
		printf ("\n Enter Value for y (1-5):");
		scanf ("%d",&y);
		if (y <=5 )
		  printf ("\n The Value For y is : %d",y);
		else if (y <=20 )
		    printf ("\n The Value y execeds 5 ");
		 	else 
		 	printf ("Choice was not in between 1-20");
		 	
	}
	else
	 printf ("\n Choice entered was not 1");
}

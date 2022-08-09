#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main(){
   int i, n;
   int *a, *b, *c,sum=0;
   printf ("How many element in each arry ...\n");
   scanf ("%d",&n);
   
   a= (int*) malloc (n * sizeof (int));
   
   b= (int*) malloc (n * sizeof (int));
   
   c= (int*) malloc (n * sizeof (int));
   
   printf ("Enter elements of first list \n");
    for (i=0; i<n; i++)
    {
    	scanf ("%d",a+i);
	}
	
	printf ("Enter elements of second list \n");
    for (i=0; i<n; i++)
    {
    	scanf ("%d",b+i);
	}
	
	for (i=0; i<n; i++)
    {
    	*(c+i) = *(a+i) + *(b+i);
	}
	printf ("Resultant List is \n");
	
	for (i=0; i<n; i++)
	{
		printf ("%d\n",*(c+i));
	}
	
	getch();
}

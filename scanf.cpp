#include<stdio.h>
#include<conio.h>

main()
{
	float a,b;
	
	printf ("\nEnter Your First Subject Marks:");
	scanf ("%f",&a);
	
	printf ("\nEnter Your Second Subject Marks:");
	scanf ("%f",&b);
	
	float c= a+b;
	float d= a-b;
	float e= a*b;
	float f= a/b;
	
	printf ("\nThe Value Are= %f\t %f\t %f",a,b,c);
	printf ("\nThe Value Are= %f\t %f\t %f",a,b,d);
	printf ("\nThe Value Are= %f\t %f\t %f",a,b,e);
	printf ("\nThe Value Are= %f\t %f\t %f",a,b,f);
}

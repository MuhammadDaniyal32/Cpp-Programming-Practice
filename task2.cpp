#include<stdio.h>
#include<conio.h>

main()
{
	float b,c,d;
	int a,g,h;

	char st[38];
	printf ("Enter Your Name:");
    scanf ("%s",st);
	
	printf ("Enter Your Roll No:");
	scanf ("%d",&a);
	
	printf ("####Enter Your Suject Marks####\n");
	printf ("Enter Computer Marks=");
	scanf ("%f",&b);
	
	printf ("Enter Sindhi Marks=");
	scanf ("%f",&c);
	
	printf ("Enter Pst Marks=");
	scanf ("%f",&d);
	
	float e=b+c+d;
	float q=e/300;
	float f= q*100;
	printf ("Your Percentage is %.2f\n",f);

	if (f>=80)
	 printf ("Your Grade Is : A");
	 
	else if (f>=70)
	 printf ("Your Grade Is : B");
	
	else if (f>=60)
	 printf ("Your Grade Is : c");
	 
	else if (f>=50)
	 printf ("Your Grade Is : d");
	 
	else if (f>=40)
	 printf ("Your Grade Is : f");
	
	else 
	 printf ("Your Are Failed\n\n");
	 
	 
	printf ("\t\t APTECH EDUCTION NORTH KARACHI\n\n");
	printf ("Roll NO# %d",a);
	printf ("\t\t Name:%s\n",st);
	printf ("----------------------------------------------------------------------\n");
	printf ("Subject");
	printf ("\t\t Max Marks");
	printf ("\t Min Marks");
	printf ("\t\t Obtain Marks\n");
	printf ("----------------------------------------------------------------------\n");
	printf ("Computer");
	printf ("\t100");
	printf ("\t\t 36");
	printf ("\t\t\t  %f\n",b);

	printf ("Sindhi");
	printf ("\t        100");
	printf ("\t\t 36");
	printf ("\t\t\t  %f\n",c);
	
	printf ("Pst");
	printf ("\t        100");
	printf ("\t\t 36");
	printf ("\t\t\t  %f\n",d);
	
	printf ("----------------------------------------------------------------------\n");
	
	printf ("\t\t\t\t\t\t\t  Total %.1f",e);
}

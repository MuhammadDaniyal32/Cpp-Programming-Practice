#include<stdio.h>
#include<conio.h>

main()
{
	char grade ;
	 printf ("Enter Your Grade");
	 scanf ("%c",&grade);
	
    switch(grade) 
    {
     case 'A':
     	printf ("Excellent!\n");
     	break;
         case 'B':
         case 'C':
     	printf ("Well Done\n");
     	break;
         case 'D':
     	printf ("You Passed\n");
     	break;
         case 'F':
     	printf ("Your falied\n");
     	break;
     	
    default:
    	printf ("Invalde Grade");
	}
	printf ("Your grade is %c\n",grade); 
}

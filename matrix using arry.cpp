#include<stdio.h>
#include<conio.h>

main()
{
    int d,s;
	int a[10][10],b[10][10],c[10][10],i,j;
	printf ("enter column and rows");
	scanf ("%d%d",&d,&s);
	
	printf ("Enter THE First Matrix");
	
	for(i=0; i<d; i++)
	 for(j=0; j<s; j++)
	  scanf ("%d",&a[i][j]);
	printf ("\nEnter the second matrix-->");
	
	for(i=0; i<d; i++)
	 for(j=0; j<s; j++)
	  scanf ("%d",&b[i][j]);
	printf ("\nThe first matrix-->");
	  for(i=0; i<d; i++){
	  	printf ("\n");
	  	for(j=0; j<s; j++)
	  	 printf ("%d\t",a[i][j]);
	  }
	  
	printf ("\nThe second matrix-->");
	  for(i=0; i<d; i++){
	  	printf ("\n");
	  	for(j=0; j<s; j++)
	  	 printf ("%d\t",b[i][j]);
	  }
	  
	  for(i=0; i<d; i++)
	   for(j=0; j<s; j++)
	   
	   c[i][j]=a[i][j]+b[i][j];
	   
	printf ("\nThe Addition of two matrix is-->");
	  for(i=0; i<d; i++){
	  	printf ("\n");
	  	for(j=0; j<s; j++)
	  	 printf ("%d\t",c[i][j]);
	  }
	   getch();
}

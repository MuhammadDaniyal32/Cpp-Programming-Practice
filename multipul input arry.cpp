#include<stdio.h>
#include<conio.h>

main()
{
	int marks [100],i,n,sum=0,avg;
	char name [25];
	
	printf ("enter name of student:");
	scanf ("%s",&name);
	
	printf ("enter how many subject marks you want to:");
	scanf ("%d",&n);
	
	for (i=0; i<n; i++)
	{
		printf ("enter marks subject %d:",i+1);
		scanf ("%d",&marks[i]);
		sum+=marks[i];
	}
	printf ("\n\n\n Name= %s",name);
	printf ("\n\n\n Total= %d",sum);
    avg=sum/n;
    printf ("\n\n average is : %d",avg);
}

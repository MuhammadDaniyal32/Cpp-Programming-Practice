#include<stdio.h>
#include<conio.h>

main()
{
	int n ;
	FILE * ftpr;
	if ((ftpr=fopen("my.txt","r"))==NULL)
	{
		printf ("Error! opening file");
	}
	fscanf (ftpr,"%d",&n);
	printf ("value of n=%d",n);
	fclose(ftpr);
	getch();
}

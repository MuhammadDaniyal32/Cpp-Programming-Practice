#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
	
	int arr[2][2] = {10,20,
	                 30,40};
	
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf ("value arr [%d] [%d] : [%d]\n",i,j,arr[i][j]);
		}
      }                 
}

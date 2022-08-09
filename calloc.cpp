#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main(){
	int n,i,*ptr,sum=0;
	printf ("Enter Number Of Element");
	scanf ("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf ("Error! memory not allocated");
	}
	
	printf ("Enter elements of array");
	for (i=0; i<n; ++i)
	{
		scanf ("%d",ptr+1);
		
		sum+=*(ptr+i);
	}
	
	printf ("Sum =%d",sum);
	getch();
}


#include<stdio.h>
#include<conio.h>

main()
{
	int n,i;
	float num[100], sum=0.0, avg;
	
	printf ("Enter the number of range between 1-100");
	scanf ("%d",&n);
	
	while (n>100 || n<=0)
	{
		printf ("ERROR! Number Should IN range between (1-100)\n");
		printf ("Enter the number again:");
		scanf ("%d",&n);
	}
	
	for (i=0; i<n; i++)
	{
		printf ("%d. Enter number ",i+1);
		scanf ("%f",&num[i]);
		sum=sum+num[i];
	}
	avg = sum/n;
	printf ("Sum =%.3f\n",sum);
	
	printf ("Average = %.4f\n",avg);
	
	getch();
	
}
